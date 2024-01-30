@class NSString;

@interface _UIAlertControllerCarBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPressed:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRoundedCornerPosition:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_colorForInterfaceStyle:(long long)a0;
- (void)setCornerRadius:(double)a0;

@end
