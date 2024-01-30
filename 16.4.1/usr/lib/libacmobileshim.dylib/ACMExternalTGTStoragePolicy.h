@class NSData;
@protocol ACFCryptographProtocol;

@interface ACMExternalTGTStoragePolicy : ACMKeychainTGTStoragePolicy

@property (readonly, nonatomic) id<ACFCryptographProtocol> cryptograph;
@property (readonly, nonatomic) NSData *secret;

- (id)preferences;
- (id)service;
- (id)decryptTokenData:(id)a0;
- (id)encryptTokenData:(id)a0;
- (BOOL)performRemoveTokenWithPrincipal:(id)a0 service:(id)a1;
- (void)resetSecret;
- (id)searchItemWithInfo:(id)a0;
- (int)storeItemWithInfo:(id)a0;
- (id)tokenDataWithDictionary:(id)a0;
- (id)tokenDictionaryWithData:(id)a0;

@end
