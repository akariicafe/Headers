@class UIActivityIndicatorView, AFSettingsConnection, PSDeleteButtonCell;
@protocol AssistantHistoryDelegate;

@interface AssistantHistoryViewController : PSListController {
    AFSettingsConnection *_settingsConnection;
    PSDeleteButtonCell *_deleteButtonCell;
    UIActivityIndicatorView *_indicatorView;
}

@property (weak, nonatomic) id<AssistantHistoryDelegate> delegate;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)_presentErrorAlert;
- (long long)_getDataSharingOptInStatus;
- (void)_presentPrivacySheet;
- (void)_handleDeleteSiriHistoryButtonPress;
- (void)_deleteSiriHistory;
- (void)_startIndicatorViewSpinning;
- (void)_endIndicatorViewSpinning;
- (void)_animateSpinnerIn;
- (id)_deletionResponseAlertForFailure;

@end
