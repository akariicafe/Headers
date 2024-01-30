@interface TeaUI.MastheadNavigationBarCompressionAnimator : NSObject <TUBarCompressionAnimating> {
    void /* unknown type, empty encoding */ barCompressionAnimator;
    void /* unknown type, empty encoding */ scrollView;
}

@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic) double topOffset;

- (void).cxx_destruct;
- (id)init;
- (void)prepareForUpdates;
- (void)updateWithPercentage:(double)a0;
- (void)scrollViewIsAtTop:(BOOL)a0;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;
- (double)maximumBarHeightForTraitCollection:(id)a0;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (void)reloadWithTraitCollection:(id)a0;

@end
