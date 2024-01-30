@class OBWelcomeController;
@protocol VTUIDictationDataSharingOptInPresentationDelegate;

@interface VTUIDictationDataSharingOptInPresenter : NSObject

@property (retain, nonatomic) OBWelcomeController *currentWelcomeController;
@property (weak, nonatomic) id<VTUIDictationDataSharingOptInPresentationDelegate> presentationDelegate;

- (void).cxx_destruct;
- (id)dataSharingOptInView;
- (void)_learnMoreButtonTapped;
- (id)dataSharingOptInAlertController;
- (void)_optInButtonTapped;
- (void)_optOutButtonTapped;
- (void)_userTappedDetailLinkText;
- (id)dataSharingReminderAlertController;
- (id)dictationDataSharingOptInAlertViewModel;
- (id)dictationDataSharingOptInReminderViewModel;

@end
