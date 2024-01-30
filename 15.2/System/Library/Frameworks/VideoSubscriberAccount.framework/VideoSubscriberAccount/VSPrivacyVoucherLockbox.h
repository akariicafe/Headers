@class NSArray, NSUndoManager, NSString, VSRemoteNotifier;

@interface VSPrivacyVoucherLockbox : NSObject <VSRemoteNotifierDelegate>

@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly, copy, nonatomic) NSArray *unredeemedVouchers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)redeemVoucher:(id)a0;
- (void)removeAllVouchers;
- (void)issueVouchers:(id)a0;
- (void)setUnredeemedVouchers:(id)a0;
- (id)_voucherArchiveURL;
- (void)issueVouchersForAppsWithAdamIDs:(id)a0 providerID:(id)a1;

@end
