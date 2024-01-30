@class NSString, UIImageView;

@interface MKCompassView : UIView <MKCompassView> {
    UIImageView *_imageView;
}

@property (nonatomic) double mapHeading;
@property (readonly, nonatomic) long long compassViewSize;
@property (readonly, nonatomic) long long compassViewStyle;
@property (nonatomic) double yaw;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_parameterForSize:(long long)a0;
+ (id)_parameterForStyle:(long long)a0;

- (void)_updateStyle;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)updateLocale:(id)a0;
- (void)movedToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCompassViewSize:(long long)a0 style:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLayerForCurrentSizeAndStyle;
- (void)_adaptCompassStyleToUserInterfaceStyle;
- (BOOL)isPointInNorthEastHalf:(struct CGPoint { double x0; double x1; })a0;

@end
