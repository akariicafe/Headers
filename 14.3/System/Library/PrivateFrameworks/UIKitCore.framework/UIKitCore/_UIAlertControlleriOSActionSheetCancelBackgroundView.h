@class NSString, UIView;

@interface _UIAlertControlleriOSActionSheetCancelBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    UIView *backgroundView;
    UIView *highlightBackgroundView;
    UIView *highlightView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPressed:(BOOL)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRoundedCornerPosition:(unsigned long long)a0;
- (void)setHighlighted:(BOOL)a0;

@end
