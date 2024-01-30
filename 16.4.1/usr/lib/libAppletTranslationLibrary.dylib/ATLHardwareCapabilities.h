@interface ATLHardwareCapabilities : NSObject

@property BOOL supportsTypeAExpress;
@property BOOL supportsQuickModeToGenericAFallback;

- (id)description;

@end
