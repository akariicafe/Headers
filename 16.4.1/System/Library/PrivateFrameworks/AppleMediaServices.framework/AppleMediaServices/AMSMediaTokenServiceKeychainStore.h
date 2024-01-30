@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;

- (BOOL)deleteToken;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (BOOL)storeToken:(id)a0;
- (id)retrieveToken;
- (BOOL)_removeTokenFromKeychain;
- (struct __CFDictionary { } *)_copyKeychainQuery;
- (void).cxx_destruct;

@end
