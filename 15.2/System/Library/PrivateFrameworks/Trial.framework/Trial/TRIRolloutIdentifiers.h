@class NSString;

@interface TRIRolloutIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *factorPackId;

- (BOOL)isEqualToRolloutIdentifiers:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2;

@end
