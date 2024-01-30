@class AAFollowUpController;

@interface AAAccountNotificationFollowUpController : NSObject {
    AAFollowUpController *_followUpController;
}

+ (id)_secondaryAccountTypes;

- (void)_dismissStartUsingFollowUp;
- (void)updateVerifyTermsFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)updateStartUsingiCloudFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)_updateVerifyTermsFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)dismissAllFollowupsForAccount:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_didDeleteAccount:(id)a0 oldAccount:(id)a1;
- (void)_updateStartUsingiCloudFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (BOOL)_didAddAccount:(id)a0 oldAccount:(id)a1;

@end
