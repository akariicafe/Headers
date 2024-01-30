@class UNUserNotificationCenter, PKPaymentService, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface PKUserNotificationAuthorizationController : NSObject {
    UNUserNotificationCenter *_center;
    PKPaymentService *_paymentService;
    NSHashTable *_delegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegatesLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    unsigned long long _previouslyCheckedContentType;
}

+ (id)sharedInstance;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)requestNotificationAuthorizationWithCompletion:(id /* block */)a0;
- (void)addDelegate:(id)a0;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;
- (unsigned long long)_contentTypeToDisplayWithPasses:(id)a0;
- (void)_shouldOfferAuthorizationPromptForPayLaterReasonWithPasses:(id)a0 completion:(id /* block */)a1;
- (void)_shouldOfferAuthorizationPromptForPeerPaymentReasonWithPeerPaymentPass:(id)a0 completion:(id /* block */)a1;
- (void)authorizationStatusRequiresPromptWithCompletion:(id /* block */)a0;
- (void)authorizationStatusWithCompletion:(id /* block */)a0;
- (void)setPresentedNotificationAuthorizationPromptShown;
- (void)shouldOfferAuthorizationPromptWithPasses:(id)a0 completion:(id /* block */)a1;

@end
