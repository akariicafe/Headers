@interface PKAccessibility : NSObject <PKAccessibilityExtras>

+ (id)sharedInstance;

- (void)postAnnouncement:(id)a0 withSender:(id)a1 priority:(long long)a2;
- (BOOL)needsAccessibilityElements;

@end
