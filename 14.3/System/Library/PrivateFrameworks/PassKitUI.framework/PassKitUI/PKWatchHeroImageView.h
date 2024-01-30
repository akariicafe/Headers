@class UIImageView, UILabel;

@interface PKWatchHeroImageView : UIView {
    UIImageView *_watchView;
    struct CGSize { double width; double height; } _originalWatchViewSize;
    UILabel *_doneLabel;
}

@property (readonly, nonatomic) BOOL isCompactWatch;
@property (nonatomic) BOOL hideDoneLabel;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } watchScreenCenter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } watchScreenFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cardFrame;
@property (readonly, nonatomic) double watchDeviceImageScaleFactor;

+ (id)watchDeviceImage;
+ (id)_bridgeHeroImage;

- (struct CGSize { double x0; double x1; })imageSize;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_heroWatchImageSize;
- (id)_resizeImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })_watchScreenSize:(double)a0;
- (struct CGPoint { double x0; double x1; })_watchScreenInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spaceBelowCardFrame;

@end
