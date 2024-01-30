@class NSString, NSDictionary;

@interface TRIRolloutAllocationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSDictionary *factorPackIds;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackIds:(id)a2;
- (unsigned long long)hash;

@end
