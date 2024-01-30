@class NSString;
@protocol ACFKeychainManagerProtocol;

@interface ACMKeychainTGTStoragePolicy : NSObject <ACCSSOTGTStoragePolicy>

@property (readonly, nonatomic) id<ACFKeychainManagerProtocol> keychainManager;
@property (nonatomic) BOOL useSharedStorage;
@property (retain, nonatomic) NSString *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateToken:(id)a0;
- (BOOL)storeToken:(id)a0;
- (BOOL)performStoreToken:(id)a0 withService:(id)a1;
- (id)allTokensWithPrincipal:(id)a0;
- (id)allTokensWithPrincipal:(id)a0 service:(id)a1;
- (id)ssoTokenWithKeychainInfo:(id)a0 realm:(id)a1;
- (id)dictionaryWithSSOToken:(id)a0;
- (id)searchTokenWithPrincipal:(id)a0;
- (BOOL)removeTokenWithPrincipal:(id)a0;
- (int)storeItemWithInfo:(id)a0;
- (id)tokenDataWithDictionary:(id)a0;
- (id)tokenDictionaryWithData:(id)a0;
- (BOOL)performRemoveTokenWithPrincipal:(id)a0 service:(id)a1;
- (id)searchItemWithInfo:(id)a0;

@end
