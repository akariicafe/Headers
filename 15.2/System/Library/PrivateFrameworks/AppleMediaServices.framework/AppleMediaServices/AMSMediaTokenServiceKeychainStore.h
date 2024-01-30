@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *keychainAccessGroup;

- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (BOOL)storeToken:(id)a0;
- (id)retrieveToken;
- (void).cxx_destruct;
- (void)_removeTokenFromKeychain;
- (struct __CFDictionary { } *)_copyKeychainQuery;

@end
