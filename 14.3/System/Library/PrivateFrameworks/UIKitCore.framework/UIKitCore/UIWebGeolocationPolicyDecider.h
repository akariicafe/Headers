@class NSMapTable, NSMutableDictionary, NSMutableArray;

@interface UIWebGeolocationPolicyDecider : NSObject {
    NSMutableDictionary *_sites;
    NSMutableArray *_challenges;
    NSMapTable *_activeChallenges;
}

+ (void)initialize;
+ (id)sharedPolicyDecider;

- (void)clearCache;
- (void)_save;
- (id)init;
- (void)dealloc;
- (void)clearAllCaches;
- (void)webView:(id)a0 decidePolicyForGeolocationRequestFromOrigin:(id)a1 frame:(id)a2 listener:(id)a3;
- (void)_load;
- (id)_siteFile;
- (id)_siteFileInContainerDirectory:(id)a0 creatingIntermediateDirectoriesIfNecessary:(BOOL)a1;
- (BOOL)_isAuthorizationDate:(id)a0 inclusivelyBetweenDate:(id)a1 andDate:(id)a2;
- (void)_executeNextChallenge;
- (long long)_getChallengeCountFromHistoryForToken:(id)a0 requestingURL:(id)a1;
- (void)clearSafariCache;
- (BOOL)_getAuthorizationStatusForToken:(id)a0 requestingURL:(id)a1 promptInfo:(id *)a2;
- (void)_addChallengeCount:(long long)a0 forToken:(id)a1 requestingURL:(id)a2;
- (void)didDenyGeolocationForPromptInfo:(id)a0;
- (void)_decidePolicyForGeolocationRequestFromOrigin:(id)a0 requestingURL:(id)a1 view:(id)a2 listener:(id)a3;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)a0 requestingURL:(id)a1 view:(id)a2 listener:(id)a3;
- (void)clearAuthorizationsAddedBetween:(id)a0 and:(id)a1;
- (void)didAuthorizeGeolocationForPromptInfo:(id)a0;
- (BOOL)getAuthorizationStatusForOrigin:(id)a0 requestingURL:(id)a1 promptInfo:(id *)a2;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)a0 requestingURL:(id)a1 window:(id)a2 listener:(id)a3;

@end
