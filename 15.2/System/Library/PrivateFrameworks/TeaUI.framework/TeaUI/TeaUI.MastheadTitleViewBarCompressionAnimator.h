@interface TeaUI.MastheadTitleViewBarCompressionAnimator : NSObject <TUBarCompressionAnimating> {
    void /* unknown type, empty encoding */ shouldAnimate;
    void /* unknown type, empty encoding */ navigationBar;
}

@property (nonatomic) void /* unknown type, empty encoding */ topOffset;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;

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
