@class OBWelcomeController;
@protocol VTUIDictationDataSharingOptInPresentationDelegate;

@interface VTUIDictationDataSharingOptInPresenter : NSObject

@property (retain, nonatomic) OBWelcomeController *currentWelcomeController;
@property (weak, nonatomic) id<VTUIDictationDataSharingOptInPresentationDelegate> presentationDelegate;

- (id)dataSharingOptInView;
- (void).cxx_destruct;
- (void)_userTappedDetailLinkText;
- (void)_optInButtonTapped;
- (void)_optOutButtonTapped;
- (void)_learnMoreButtonTapped;
- (id)dataSharingOptInAlertController;
- (id)dataSharingReminderAlertController;
- (id)dictationDataSharingOptInAlertViewModel;
- (id)dictationDataSharingOptInReminderViewModel;

@end
