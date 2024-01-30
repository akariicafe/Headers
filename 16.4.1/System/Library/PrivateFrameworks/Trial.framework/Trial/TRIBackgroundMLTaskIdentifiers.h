@class NSString;

@interface TRIBackgroundMLTaskIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bmltTaskId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBMLTTaskId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (BOOL)isEqualToBMLTTaskIdentifiers:(id)a0;

@end
