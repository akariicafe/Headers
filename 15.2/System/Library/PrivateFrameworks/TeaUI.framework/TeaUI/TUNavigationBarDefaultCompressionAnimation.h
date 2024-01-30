@class UINavigationBar, TUAnimationFloatFunction, UIView;

@interface TUNavigationBarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>

@property (retain, nonatomic) UIView *titleView;
@property (readonly, nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) TUAnimationFloatFunction *opacityFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *scaleFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *translateFunction;
@property (nonatomic) BOOL compressTitleView;
@property (nonatomic) BOOL hideTitleOnTop;
@property (readonly, nonatomic) BOOL shouldCompressAtTop;
@property (nonatomic) double topOffset;
@property (readonly, nonatomic) BOOL shouldCloseGapOnScroll;

- (id)initWithNavigationBar:(id)a0;
- (void).cxx_destruct;
- (id)fetchCustomTitleView;
- (id)fetchRegularTitleView;
- (void)prepareForUpdates;
- (void)updateWithPercentage:(double)a0;
- (void)scrollViewIsAtTop:(BOOL)a0;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;
- (double)maximumBarHeightForTraitCollection:(id)a0;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (void)reloadWithTraitCollection:(id)a0;

@end
