@class OBTrayButton, PXRadarConfiguration, UILabel, UIButton;

@interface PXSurveyRadarReporterViewController : OBWelcomeController {
    PXRadarConfiguration *_configuration;
    id /* block */ _completionHandler;
}

@property (retain, nonatomic) OBTrayButton *notNowButton;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *readReleaseAgreementButton;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)attributedDetailText;
- (id)initWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didSelectReadReleaseAgreementButton;
- (void)_handleAgreeButton:(id)a0;
- (void)_handleNotNowButton:(id)a0;

@end
