@interface TMLNSObjectAccessibility : NSObject

+ (void)makeAccessible:(id)a0 signalName:(id)a1;

- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;

@end
