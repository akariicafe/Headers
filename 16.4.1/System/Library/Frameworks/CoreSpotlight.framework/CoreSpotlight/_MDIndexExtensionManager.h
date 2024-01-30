@interface _MDIndexExtensionManager : _MDExtensionManager

+ (id)sharedManager;
+ (void)setMemoryPressureStatus:(unsigned long long)a0;

- (id)init;
- (void)loadExtensions;

@end
