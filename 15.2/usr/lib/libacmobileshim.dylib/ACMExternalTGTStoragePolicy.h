@class NSData;
@protocol ACFCryptographProtocol;

@interface ACMExternalTGTStoragePolicy : ACMKeychainTGTStoragePolicy

@property (readonly, nonatomic) id<ACFCryptographProtocol> cryptograph;
@property (readonly, nonatomic) NSData *secret;

- (id)preferences;
- (id)service;
- (int)storeItemWithInfo:(id)a0;
- (id)tokenDataWithDictionary:(id)a0;
- (id)encryptTokenData:(id)a0;
- (id)decryptTokenData:(id)a0;
- (id)tokenDictionaryWithData:(id)a0;
- (void)resetSecret;
- (BOOL)performRemoveTokenWithPrincipal:(id)a0 service:(id)a1;
- (id)searchItemWithInfo:(id)a0;

@end
