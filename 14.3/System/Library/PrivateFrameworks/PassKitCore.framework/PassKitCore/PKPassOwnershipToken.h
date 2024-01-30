@class NSString;

@interface PKPassOwnershipToken : NSObject {
    NSString *_ownershipToken;
}

@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (copy, nonatomic) NSString *ownershipToken;

+ (void)queryKeychainForOwnershipTokens:(id /* block */)a0;
+ (void)deleteAllLocalKeychainOwnershipTokens;

- (void).cxx_destruct;
- (id)_wrapperWithType:(unsigned long long)a0 identifier:(id)a1;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void)_readFromKeychain;
- (void)_writeToKeychain;
- (void)deleteTokenFromLocalKeychain;
- (id)initWithOwnershipToken:(id)a0 identifier:(id)a1;
- (void)deleteTokenFromKeychain;

@end
