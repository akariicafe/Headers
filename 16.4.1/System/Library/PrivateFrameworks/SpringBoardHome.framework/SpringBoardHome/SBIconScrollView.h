@protocol SBIconScrollViewDelegate;

@interface SBIconScrollView : BSUIScrollView

@property (nonatomic) struct CGPoint { double x; double y; } lastAnimatedScrollContentOffset;
@property (weak, nonatomic) id<SBIconScrollViewDelegate> delegate;

- (BOOL)cancelTouchTracking;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_roundedProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
