@class OBTrayButton, NSString, UILabel, UIButton;

@interface PXSurveyRadarReporterViewController : OBWelcomeController

@property (copy, nonatomic, setter=_setCompletionHandler:) id /* block */ _completionHandler;
@property (retain, nonatomic) OBTrayButton *notNowButton;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *readReleaseAgreementButton;
@property (retain, nonatomic) NSString *radarTitle;

- (id)initForPhotosChallengesWithCompletionHandler:(id /* block */)a0;
- (id)initWithRadarTitle:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateNotNowButtonColor;
- (void)_didSelectReadReleaseAgreementButton;
- (void)_handleAgreeButton:(id)a0;
- (void)_handleNotNowButton:(id)a0;
- (id)_disclaimerText;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)attributedDetailText;

@end
