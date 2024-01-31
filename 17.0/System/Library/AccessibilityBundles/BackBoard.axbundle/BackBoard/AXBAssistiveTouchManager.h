@interface AXBAssistiveTouchManager : NSObject

+ (void)initializeMonitor;

- (id)init;
- (void)_kickstartAssistiveTouchIfNeeded;

@end
