@class UIImageView, NSString;

@interface BPSIllustratedWatchView : UIView <BPSWatchViewProtocol>

@property (retain, nonatomic) UIImageView *watchScreenImageView;
@property (retain, nonatomic) UIImageView *watchView;
@property (nonatomic) double scaledDownFactor;
@property (nonatomic) BOOL usingLuxoAsset;
@property (retain, nonatomic) NSString *screenImageSearchBundleIdentifier;
@property (copy, nonatomic) NSString *screenImageName;
@property (nonatomic) BOOL allowScaling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })watchScreenInsetGuide;
- (id)watchAssetBundle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unscaledWatchScreenInsetGuide;

@end
