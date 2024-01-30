@class UIStackView, NSArray, NSString, UIFontDescriptor;
@protocol CLKMonochromeFilterProvider;

@interface NTKSwissMoonPhaseSevenDayView : UIView <CLKFullColorImageView>

@property (retain, nonatomic) UIStackView *sevenDayLayoutView;
@property (retain, nonatomic) NSArray *dailyViews;
@property (retain, nonatomic) NSArray *dividerViews;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (long long)_labelFilterStyle;
- (long long)_moonFilterStyle;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
