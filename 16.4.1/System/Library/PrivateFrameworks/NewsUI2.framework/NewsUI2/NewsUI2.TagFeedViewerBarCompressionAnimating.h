@interface NewsUI2.TagFeedViewerBarCompressionAnimating : _TtCs12_SwiftObject <TUBarCompressionAnimating> {
    void /* unknown type, empty encoding */ viewController;
}

@property (nonatomic, readonly) double topOffset;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;

- (double)maximumBarHeightForTraitCollection:(id)a0;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;
- (void)prepareForUpdates;
- (void)reloadWithTraitCollection:(id)a0;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (void)updateWithPercentage:(double)a0;
- (void)scrollViewIsAtTop:(BOOL)a0 offset:(double)a1;

@end
