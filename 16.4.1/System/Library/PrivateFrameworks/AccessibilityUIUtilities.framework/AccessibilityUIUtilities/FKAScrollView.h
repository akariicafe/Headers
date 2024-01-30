@interface FKAScrollView : UIScrollView

- (BOOL)canBecomeFocused;
- (id)_accessibilityKeyCommands;
- (void)_scrollInXDirection:(double)a0 yDirection:(double)a1;
- (void)_scrollDown:(id)a0;
- (void)_scrollUp:(id)a0;

@end
