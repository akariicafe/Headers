@class UIView, NSString, UIImageView, NSDictionary, UIFontDescriptor, CLKDevice, UILabel;
@protocol CLKMonochromeFilterProvider;

@interface CompassRichRectangularDialView : UIView <CLKFullColorImageView> {
    UILabel *_headingLabel;
    UILabel *_directionLabel;
    UILabel *_bearingLabel;
    UIImageView *_needleView;
    UIImageView *_needleShadow;
    UIView *_wheelContainer;
    NSDictionary *_directions;
    NSDictionary *_angles;
    NSDictionary *_ticks;
    NSDictionary *_bearingTicks;
    double _offset;
    unsigned long long _bearingOffset;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) BOOL supportsGossamer;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_applyFilters:(id)a0 toLayers:(id)a1;
- (void)_applyFilters:(id)a0 toViews:(id)a1;
- (void)_createAngles;
- (void)_createBearingTicks;
- (void)_createDirections;
- (void)_createTicks;
- (id)_filtersForStyle:(long long)a0 fraction:(id)a1;
- (id)_newLabelWithFont:(id)a0 color:(id)a1 text:(id)a2;
- (void)_updateForMonochrome:(id)a0;

@end
