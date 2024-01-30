@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue, EFScheduler;

@interface EMBlockedSenderManager : NSObject <EMBlockedSenderReader> {
    struct atomic_flag { _Atomic BOOL _Value; } _didRemoveObservers;
}

@property (retain, nonatomic) NSSet *blockedSenderCache;
@property (retain, nonatomic) id<EFScheduler> resetScheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic, getter=isMoveToTrashEnabled) BOOL moveToTrashEnabled;
@property (nonatomic, getter=isBlockedSenderEnabled) BOOL blockedSenderEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPromptForBlockedSender;
+ (void)setPromptForBlockedSender:(BOOL)a0;
+ (BOOL)shouldMoveToTrashForMailboxType:(long long)a0;

- (void)blockEmailAddresses:(id)a0;
- (void)unblockTokenAddress:(id)a0;
- (void)blockContact:(id)a0;
- (void)test_tearDown;
- (void)_removeObserversIfNeeded;
- (void)_postBlockedSenderListDidChangeNotificationBasedOnBlockedSenderEnabledState;
- (void)blockEmailAddress:(id)a0;
- (void)_blockedSenderListDidChange:(id)a0;
- (void)_unblockPhoneNumber:(id)a0;
- (BOOL)isContactBlocked:(id)a0;
- (void).cxx_destruct;
- (void)blockTokenAddress:(id)a0;
- (void)unblockEmailAddresses:(id)a0;
- (id)init;
- (BOOL)_isEmailAddressBlocked:(id)a0;
- (BOOL)areAnyEmailAddressesBlocked:(id)a0;
- (BOOL)isTokenAddressIsBlocked:(id)a0;
- (void)_resetBlockedSenderCache;
- (void)unblockContact:(id)a0;
- (void)_blockContact:(id)a0 block:(BOOL)a1;
- (void)dealloc;
- (void)_blockPhoneNumber:(id)a0;
- (BOOL)isEmailAddressBlocked:(id)a0;
- (void)unblockEmailAddress:(id)a0;

@end
