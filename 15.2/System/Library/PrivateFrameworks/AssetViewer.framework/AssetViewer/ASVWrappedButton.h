@interface ASVWrappedButton : UIButton

- (void)setHighlighted:(BOOL)a0;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;
- (id)wrapperButton;

@end
