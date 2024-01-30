@class NSString, NSXPCListener;
@protocol FLFollowUpControllerDelegate;

@interface FLFollowUpController : NSObject <NSXPCListenerDelegate> {
    NSString *_clientIdentifier;
    NSString *_machServiceName;
    NSXPCListener *_listener;
}

@property (weak, nonatomic) id<FLFollowUpControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)updateBadgesForTimer;
- (void)_postHSA2PasswordResetNotification:(id)a0 completion:(id /* block */)a1;
- (BOOL)clearNotificationForItem:(id)a0 error:(id *)a1;
- (void)_postHSA2LoginCode:(id)a0 withNotification:(id)a1 completion:(id /* block */)a2;
- (BOOL)postFollowUpItem:(id)a0 error:(id *)a1;
- (unsigned long long)countOfPendingFollowUpItems:(id *)a0;
- (BOOL)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)a0 error:(id *)a1;
- (void)_postHSA2PasswordChangeForAppleID:(id)a0 completion:(id /* block */)a1;
- (id)initWithClientIdentifier:(id)a0 xpcEndpoint:(id)a1;
- (void)postFollowUpItem:(id)a0 completion:(id /* block */)a1;
- (void)pendingFollowUpItemsWithCompletion:(id /* block */)a0;
- (void)_didActivateHSA2LoginNotification:(id)a0;
- (void)countOfPendingFollowUpItemsWithCompletion:(id /* block */)a0;
- (id)pendingFollowUpItems:(id *)a0;
- (id)initWithClientIdentifier:(id)a0;
- (BOOL)clearPendingFollowUpItems:(id *)a0;
- (id)initWithClientIdentifier:(id)a0 machServiceName:(id)a1 delegate:(id)a2;
- (void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)a0;
- (void).cxx_destruct;
- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)_postHSA2LoginNotification:(id)a0 completion:(id /* block */)a1;
- (void)clearPendingFollowUpItemsWithCompletion:(id /* block */)a0;

@end
