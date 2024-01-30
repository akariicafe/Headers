@class NSString;

@interface PKPassOwnershipToken : NSObject {
    NSString *_ownershipToken;
}

@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (copy, nonatomic) NSString *ownershipToken;

+ (void)queryKeychainForOwnershipTokens:(id /* block */)a0;
+ (void)deleteAllLocalKeychainOwnershipTokens;

- (id)initWithIdentifier:(id)a0;
- (id)_wrapperWithType:(unsigned long long)a0 identifier:(id)a1;
- (void)_readFromKeychain;
- (void)_writeToKeychain;
- (void)deleteTokenFromLocalKeychain;
- (id)initWithOwnershipToken:(id)a0 identifier:(id)a1;
- (void)deleteTokenFromKeychain;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
