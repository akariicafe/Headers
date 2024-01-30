@class NSString;

@interface LNAvailabilityAnnotation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *introducedVersion;
@property (readonly, copy, nonatomic) NSString *deprecatedVersion;
@property (readonly, copy, nonatomic) NSString *obsoletedVersion;

+ (id)available;
+ (id)unavailable;
+ (id)deprecated;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIntroducedVersion:(id)a0 deprecatedVersion:(id)a1 available:(BOOL)a2 deprecated:(BOOL)a3;
- (id)initWithIntroducedVersion:(id)a0 deprecatedVersion:(id)a1 obsoletedVersion:(id)a2;

@end
