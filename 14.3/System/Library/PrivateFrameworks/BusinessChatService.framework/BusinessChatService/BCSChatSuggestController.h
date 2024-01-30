@class BCSBusinessItemPersistentStore, NSString;
@protocol BCSIdentityServiceProtocol, BCSUserDefaultsProviding, BCSItemRemoteFetching, BCSLocaleHelperProtocol;

@interface BCSChatSuggestController : NSObject <BCSChatSuggestControllerProtocol>

@property (readonly, nonatomic) BCSBusinessItemPersistentStore *businessItemPersistentStore;
@property (readonly, nonatomic) id<BCSItemRemoteFetching> itemRemoteFetcher;
@property (readonly, nonatomic) id<BCSUserDefaultsProviding> userDefaults;
@property (readonly, nonatomic) id<BCSIdentityServiceProtocol> identityService;
@property (readonly, nonatomic) id<BCSLocaleHelperProtocol> localeHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBusinessItemPersistentStore:(id)a0 itemRemoteFetcher:(id)a1 userDefaults:(id)a2 identityService:(id)a3 localeHelper:(id)a4;
- (BOOL)chatSuggestVisibilityForBusinessItem:(id)a0;
- (void)fetchBusinessItemWithBizID:(id)a0 TTL:(double)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (BOOL)_deleteBusinessItemIfExpiredWithBusinessItemObject:(id)a0;
- (BOOL)_deleteBusinessItemFromPersistentStore;

@end
