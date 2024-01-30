@interface _SBCameraLaunchCondition : NSObject

@property (nonatomic, getter=isMet) BOOL met;

+ (id)conditionWithConditions:(id)a0;
+ (id)conditionWithValue:(BOOL)a0;

@end
