@class UIToolbar;

@interface TUToolbarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>

@property (retain, nonatomic) UIToolbar *toolbar;
@property (readonly, nonatomic) BOOL shouldCompressAtTop;
@property (nonatomic) double topOffset;
@property (readonly, nonatomic) BOOL shouldCloseGapOnScroll;

- (void)prepareForUpdates;
- (void)updateWithPercentage:(double)a0;
- (void)scrollViewIsAtTop:(BOOL)a0;
- (void)reloadWithTraitCollection:(id)a0;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;
- (double)maximumBarHeightForTraitCollection:(id)a0;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)initWithToolbar:(id)a0;

@end
