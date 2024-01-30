@protocol SBIconScrollViewDelegate;

@interface SBIconScrollView : BSUIScrollView

@property (nonatomic) struct CGPoint { double x; double y; } lastAnimatedScrollContentOffset;
@property (weak, nonatomic) id<SBIconScrollViewDelegate> delegate;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)cancelTouchTracking;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (struct CGPoint { double x0; double x1; })_roundedProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
