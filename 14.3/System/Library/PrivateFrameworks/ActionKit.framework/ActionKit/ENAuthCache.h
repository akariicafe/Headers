@class NSMutableDictionary, ENAuthCacheEntry;

@interface ENAuthCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *linkedCache;
@property (retain, nonatomic) ENAuthCacheEntry *businessCache;

- (id)init;
- (void).cxx_destruct;
- (void)setAuthenticationResult:(id)a0 forLinkedNotebookGuid:(id)a1;
- (id)authenticationResultForLinkedNotebookGuid:(id)a0;
- (void)setAuthenticationResultForBusiness:(id)a0;
- (id)authenticationResultForBusiness;

@end
