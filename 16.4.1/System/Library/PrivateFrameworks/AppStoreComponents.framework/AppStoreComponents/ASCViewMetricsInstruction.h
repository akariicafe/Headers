@class NSSet, ASCMetricsData;

@interface ASCViewMetricsInstruction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ASCMetricsData *data;
@property (readonly, copy, nonatomic) NSSet *invocationPoints;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 invocationPoints:(id)a1;

@end
