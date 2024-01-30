@class UIColor, NSString, NSDictionary, UIImageView, UILabel, CLKDevice, CAGradientLayer;
@protocol CLKMonochromeFilterProvider;

@interface CompassRichRectangularDialView : UIView <CLKFullColorImageView> {
    CLKDevice *_device;
    UILabel *_headingLabel;
    UIColor *_monochromeHeadingColor;
    UILabel *_bearingLabel;
    NSDictionary *_directions;
    NSDictionary *_angles;
    NSDictionary *_ticks;
    NSDictionary *_bearingTicks;
    UIImageView *_needleView;
    UIImageView *_needleShadow;
    CAGradientLayer *_leftGradient;
    CAGradientLayer *_rightGradient;
    double _offset;
    unsigned long long _bearingOffset;
}

@property (class, readonly, nonatomic) BOOL tritium_wantsCrossfadeAnimation;

@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (void)_createDirections;
- (void)_createAngles;
- (void)_createTicks;
- (void)_createBearingTicks;
- (void)_updateForMonochrome:(id)a0;
- (id)_filterForStyle:(long long)a0 fraction:(id)a1;
- (void)_applyFilter:(id)a0 toViews:(id)a1;
- (void)_applyFilter:(id)a0 toLayers:(id)a1;
- (id)_newLabelWithFont:(id)a0 color:(id)a1 text:(id)a2;

@end
