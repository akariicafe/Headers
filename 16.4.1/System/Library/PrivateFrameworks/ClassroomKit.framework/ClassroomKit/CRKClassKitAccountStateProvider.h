@class ACAccountStore;

@interface CRKClassKitAccountStateProvider : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) long long accountState;

- (void)accountStoreDidChange:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginObservingAccountChanges;
- (long long)currentAccountState;
- (void)endObservingAccountChanges;
- (void)updateAccountState;

@end
