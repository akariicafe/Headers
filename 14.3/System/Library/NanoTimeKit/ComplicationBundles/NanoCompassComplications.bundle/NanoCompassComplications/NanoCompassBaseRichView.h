@class NSString, UIView;
@protocol CLKMonochromeFilterProvider;

@interface NanoCompassBaseRichView : UIView <CLKFullColorImageView> {
    UIView *_backgroundView;
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
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;
- (void)_applyFilter:(id)a0 toViews:(id)a1;

@end
