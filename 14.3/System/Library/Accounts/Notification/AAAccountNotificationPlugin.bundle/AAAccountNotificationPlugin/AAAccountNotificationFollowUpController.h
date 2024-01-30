@class AAFollowUpController;

@interface AAAccountNotificationFollowUpController : NSObject {
    AAFollowUpController *_followUpController;
}

+ (id)_secondaryAccountTypes;

- (id)init;
- (void).cxx_destruct;
- (void)updateStartUsingiCloudFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)dismissAllFollowupsForAccount:(id)a0;
- (void)updateVerifyTermsFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)_updateStartUsingiCloudFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)_updateVerifyTermsFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)_dismissStartUsingFollowUp;
- (BOOL)_didAddAccount:(id)a0 oldAccount:(id)a1;
- (BOOL)_didDeleteAccount:(id)a0 oldAccount:(id)a1;

@end
