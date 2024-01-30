@interface ICMusicSubscriptionStatusTerms : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long acceptedVersion;
@property (readonly, nonatomic) long long currentVersion;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseTermsDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
