@interface MIContainerProtectionManager : NSObject

+ (id)defaultManager;

- (void)setDataProtectionOnDataContainer:(id)a0 forNewBundle:(id)a1 retryIfLocked:(BOOL)a2;

@end
