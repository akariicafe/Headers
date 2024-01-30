@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *keychainAccessGroup;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (id)retrieveToken;
- (struct __CFDictionary { } *)_copyKeychainQuery;
- (void)_removeTokenFromKeychain;
- (BOOL)storeToken:(id)a0;

@end
