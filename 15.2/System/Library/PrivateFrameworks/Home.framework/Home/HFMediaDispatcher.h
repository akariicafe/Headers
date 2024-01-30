@class NSArray, ACAccountStore, NSHashTable;

@interface HFMediaDispatcher : NSObject

@property (retain, nonatomic) NSHashTable *appleMusicAccountObservers;
@property (copy, nonatomic) NSArray *appleMusicMagicAuthCapableAccounts;
@property (readonly, nonatomic) ACAccountStore *appleMusicAccountStore;
@property (readonly, nonatomic) BOOL isUsingiCloud;

+ (id)sharedDispatcher;

- (void).cxx_destruct;
- (id)init;
- (void)_setupAppleMusicAccountStoreIfNecessary;
- (BOOL)_reloadAppleMusicMagicAuthCapableAccounts;
- (void)_accountsStoreWasUpdated:(id)a0;
- (void)addAppleMusicAccountObserver:(id)a0;
- (void)removeAppleMusicAccountObserver:(id)a0;

@end
