@interface UIInputViewSetPlacementOffScreenDownForFloatingAssistant : UIInputViewSetPlacementOffScreenDown

+ (id)placement;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (BOOL)isFloatingAssistantView;
- (BOOL)showsEditItems;

@end
