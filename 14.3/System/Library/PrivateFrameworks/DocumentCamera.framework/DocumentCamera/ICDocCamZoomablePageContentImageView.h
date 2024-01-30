@protocol ICDocCamZoomablePageContentViewDelegate;

@interface ICDocCamZoomablePageContentImageView : UIImageView

@property (weak, nonatomic) id<ICDocCamZoomablePageContentViewDelegate> pageContentViewDelegate;

- (void).cxx_destruct;
- (id)_accessibilityScrollAncestorForSelector:(SEL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
