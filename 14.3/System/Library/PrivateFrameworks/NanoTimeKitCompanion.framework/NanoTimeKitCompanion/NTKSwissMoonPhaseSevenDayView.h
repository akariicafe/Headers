@class NSArray, NSString, UIStackView;
@protocol CLKMonochromeFilterProvider;

@interface NTKSwissMoonPhaseSevenDayView : UIView <CLKFullColorImageView>

@property (class, readonly, nonatomic) BOOL tritium_wantsCrossfadeAnimation;

@property (retain, nonatomic) UIStackView *sevenDayLayoutView;
@property (retain, nonatomic) NSArray *dailyViews;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateQuadViewsWithBlock:(id /* block */)a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;

@end
