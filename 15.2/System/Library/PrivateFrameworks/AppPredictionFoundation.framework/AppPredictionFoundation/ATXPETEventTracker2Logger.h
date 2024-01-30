@interface ATXPETEventTracker2Logger : NSObject <ATXPETEventTracker2Protocol>

- (void)trackScalarForMessage:(id)a0;
- (void)logMessage:(id)a0;
- (void)trackDistributionForMessage:(id)a0 value:(double)a1;
- (void)trackScalarForMessage:(id)a0 count:(int)a1;

@end
