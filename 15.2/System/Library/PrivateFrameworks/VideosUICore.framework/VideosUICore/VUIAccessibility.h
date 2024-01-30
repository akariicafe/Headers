@interface VUIAccessibility : NSObject

+ (id)sharedInstance;
+ (BOOL)isFeatureEnabled:(long long)a0;
+ (BOOL)contentSizeCategoryIsAccessibility:(unsigned long long)a0;
+ (BOOL)isAXLargeEnabled:(unsigned long long)a0;
+ (BOOL)isAXSmallEnabled:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (void)_addObserverToAccessibilityNotifications;
- (void)_didChangeAccessibilityVoiceOverStatus;
- (void)_didChangeAccessibilityReduceMotionStatus;

@end
