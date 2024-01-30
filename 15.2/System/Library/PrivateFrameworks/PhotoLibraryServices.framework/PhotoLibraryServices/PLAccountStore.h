@class ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface PLAccountStore : ACAccountStore {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_cachedPrimaryAppleAccount;
}

@property (readonly, weak) ACAccount *cachedPrimaryAppleAccount;

+ (id)pl_sharedAccountStore;

- (void)accountDidChange:(id)a0;
- (void)clearCachedProperties;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
