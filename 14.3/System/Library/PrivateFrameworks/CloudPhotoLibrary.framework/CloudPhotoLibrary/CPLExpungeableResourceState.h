@class NSDate;

@interface CPLExpungeableResourceState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long expungedState;
@property (copy, nonatomic) NSDate *expungedDate;

+ (id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
