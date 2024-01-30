@class NSMapTable, NSMutableDictionary, NSMutableArray;

@interface UIWebGeolocationPolicyDecider : NSObject {
    NSMutableDictionary *_sites;
    NSMutableArray *_challenges;
    NSMapTable *_activeChallenges;
}

+ (void)initialize;
+ (id)sharedPolicyDecider;

- (void)_save;
- (void)clearAllCaches;
- (void)clearCache;
- (void)dealloc;
- (id)init;
- (void)_load;
- (void)_addChallengeCount:(long long)a0 forToken:(id)a1 requestingURL:(id)a2;
- (void)_decidePolicyForGeolocationRequestFromOrigin:(id)a0 requestingURL:(id)a1 view:(id)a2 listener:(id)a3;
- (void)_executeNextChallenge;
- (BOOL)_getAuthorizationStatusForToken:(id)a0 userVisibleDomain:(id)a1 requestingURL:(id)a2 promptInfo:(id *)a3;
- (long long)_getChallengeCountFromHistoryForToken:(id)a0 requestingURL:(id)a1;
- (BOOL)_isAuthorizationDate:(id)a0 inclusivelyBetweenDate:(id)a1 andDate:(id)a2;
- (id)_siteFile;
- (id)_siteFileInContainerDirectory:(id)a0 creatingIntermediateDirectoriesIfNecessary:(BOOL)a1;
- (void)clearAuthorizationsAddedBetween:(id)a0 and:(id)a1;
- (void)clearSafariCache;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)a0 requestingURL:(id)a1 view:(id)a2 listener:(id)a3;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)a0 requestingURL:(id)a1 window:(id)a2 listener:(id)a3;
- (void)didAuthorizeGeolocationForPromptInfo:(id)a0;
- (void)didDenyGeolocationForPromptInfo:(id)a0;
- (BOOL)getAuthorizationStatusForOrigin:(id)a0 requestingURL:(id)a1 promptInfo:(id *)a2;
- (void)webView:(id)a0 decidePolicyForGeolocationRequestFromOrigin:(id)a1 frame:(id)a2 listener:(id)a3;

@end
