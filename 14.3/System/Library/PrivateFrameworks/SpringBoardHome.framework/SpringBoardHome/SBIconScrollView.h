@protocol SBIconScrollViewDelegate;

@interface SBIconScrollView : BSUIScrollView

@property (nonatomic) struct CGPoint { double x; double y; } lastAnimatedScrollContentOffset;
@property (weak, nonatomic) id<SBIconScrollViewDelegate> delegate;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (BOOL)cancelTouchTracking;
- (struct CGPoint { double x0; double x1; })_roundedProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
