@class UIFontDescriptor, NSString, CLKDevice;
@protocol CLKMonochromeFilterProvider;

@interface NanoCompassBaseRichView : UIView <CLKFullColorImageView>

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) BOOL supportsGossamer;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_applyFilters:(id)a0 toViews:(id)a1;
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;

@end
