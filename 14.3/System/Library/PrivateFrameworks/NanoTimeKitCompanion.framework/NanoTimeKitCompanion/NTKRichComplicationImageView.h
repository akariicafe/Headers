@class NSString, UIView, CLKDevice, NTKStackedImagesComplicationImageView;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationImageView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>

@property (weak, nonatomic) UIView *richComplicationImageView;
@property (weak, nonatomic) NTKStackedImagesComplicationImageView *monochromeImageView;
@property (nonatomic, getter=isHostingOverrideView) BOOL hostingOverrideView;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long monochromeFilterType;
@property (nonatomic) BOOL inMonochromeMode;
@property (nonatomic) BOOL prefersFilterOverTransition;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) BOOL useAccentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithDevice:(id)a0 useAccentColor:(BOOL)a1;
- (void)setImageProvider:(id)a0 reason:(long long)a1;
- (void)enumerateQuadViewsWithBlock:(id /* block */)a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)interpolatedColorForView:(id)a0;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)a0;
- (long long)_filterStyle;

@end
