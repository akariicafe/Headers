@interface TeaUI.MiniMastheadBarCompressionAnimator : NSObject <TUBarCompressionAnimating> {
    void /* unknown type, empty encoding */ navigationBar;
    void /* unknown type, empty encoding */ maskView;
}

@property (nonatomic) void /* unknown type, empty encoding */ topOffset;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;

- (void)prepareForUpdates;
- (void)updateWithPercentage:(double)a0;
- (void)scrollViewIsAtTop:(BOOL)a0;
- (void)reloadWithTraitCollection:(id)a0;
- (id)init;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;
- (double)maximumBarHeightForTraitCollection:(id)a0;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (void).cxx_destruct;

@end
