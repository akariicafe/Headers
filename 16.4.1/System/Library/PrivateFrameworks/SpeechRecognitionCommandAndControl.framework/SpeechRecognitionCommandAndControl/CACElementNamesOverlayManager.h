@protocol CACElementNamesOverlayManagerDelegate;

@interface CACElementNamesOverlayManager : CACSimpleContentViewManager

@property (weak, nonatomic) id<CACElementNamesOverlayManagerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)isOverlay;
- (void)showNamesForElements:(id)a0;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;
- (id)voiceOverDescriptions;

@end
