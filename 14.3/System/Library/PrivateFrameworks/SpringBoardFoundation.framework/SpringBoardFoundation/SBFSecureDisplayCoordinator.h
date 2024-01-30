@interface SBFSecureDisplayCoordinator : NSObject

@property (nonatomic, getter=inSecureMode) BOOL secureMode;

- (void)setSecureMode:(BOOL)a0 postNotification:(BOOL)a1;

@end
