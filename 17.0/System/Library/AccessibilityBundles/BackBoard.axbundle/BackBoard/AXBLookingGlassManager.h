@interface AXBLookingGlassManager : NSObject

+ (void)initializeMonitor;
+ (void)showLookingGlassMenu;

- (id)init;
- (void)unused;
- (void)_showLookingGlassMenu;
- (void)_updateLookingGlassServicesIfNeeded;

@end
