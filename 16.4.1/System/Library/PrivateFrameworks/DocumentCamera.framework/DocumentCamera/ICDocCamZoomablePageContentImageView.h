@protocol ICDocCamZoomablePageContentViewDelegate;

@interface ICDocCamZoomablePageContentImageView : UIImageView

@property (weak, nonatomic) id<ICDocCamZoomablePageContentViewDelegate> pageContentViewDelegate;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)_accessibilityRespondsToUserInteraction;
- (id)_accessibilityScrollAncestorForSelector:(SEL)a0;

@end
