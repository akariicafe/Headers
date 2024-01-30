@protocol VTUIDictationDataSharingOptInPresentationDelegate;

@interface VTUIDictationDataSharingOptInPresenter : NSObject

@property (weak, nonatomic) id<VTUIDictationDataSharingOptInPresentationDelegate> presentationDelegate;

- (void).cxx_destruct;
- (id)dataSharingOptInView;
- (void)_optInButtonTapped;
- (void)_optOutButtonTapped;
- (void)_learnMoreButtonTapped;
- (id)dataSharingOptInAlertController;
- (id)dataSharingReminderAlertController;
- (id)dictationDataSharingOptInAlertViewModel;
- (id)dictationDataSharingOptInReminderViewModel;

@end
