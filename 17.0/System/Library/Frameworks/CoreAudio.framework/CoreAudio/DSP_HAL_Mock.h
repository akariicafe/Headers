@interface DSP_HAL_Mock : NSObject

+ (unsigned int)customPropertyCooldownMilliseconds;
+ (BOOL)hasTestHooks;
+ (void)setTestHooks:(void *)a0;

- (id)createFactory:(int)a0;

@end
