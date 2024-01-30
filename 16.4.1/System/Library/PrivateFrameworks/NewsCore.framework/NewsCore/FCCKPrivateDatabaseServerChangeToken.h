@class NSDictionary;

@interface FCCKPrivateDatabaseServerChangeToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *changeTokensByDestinationKey;

+ (id)tokenByAddingCKToken:(id)a0 forDestination:(long long)a1 toToken:(id)a2;
+ (id)_keyForDestination:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithChangeTokensByDestination:(id)a0;
- (id)initWithChangeTokensByDestinationKey:(id)a0;
- (id)init;
- (id)changeTokenForDestination:(long long)a0;
- (void).cxx_destruct;

@end
