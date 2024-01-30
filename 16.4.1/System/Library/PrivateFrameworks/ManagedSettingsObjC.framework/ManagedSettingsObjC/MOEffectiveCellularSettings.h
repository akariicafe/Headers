@class MOEffectiveBool;

@interface MOEffectiveCellularSettings : NSObject

@property (readonly) MOEffectiveBool *lockAppCellularData;
@property (readonly) MOEffectiveBool *lockCellularPlan;
@property (readonly) MOEffectiveBool *lockESIM;

@end
