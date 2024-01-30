@class NSDate, NSString, ATXMinimalSlotResolutionParameters;

@interface ATXMinimalActionParameters : NSObject <NSCopying>

@property (readonly, nonatomic) ATXMinimalSlotResolutionParameters *minimalSlotResolutionParams;
@property (retain, nonatomic) NSDate *actionTime;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *actionType;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithMinimalSlotResolutionParameters:(id)a0 actionTime:(id)a1 bundleId:(id)a2 actionType:(id)a3;
- (id)getContainerWithScore:(float)a0;

@end
