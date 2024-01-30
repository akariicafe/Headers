@interface AXCapabilityManager : NSObject

+ (id)sharedManager;

- (id)capabilities;
- (BOOL)isCapabilityAvailable:(id)a0;
- (BOOL)isAccessibilityCapability:(id)a0;

@end
