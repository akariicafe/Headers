@interface UIKeyboardLayoutGuide : UITrackingLayoutGuide

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } previousOffset;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) BOOL hasPausedEdges;
@property (nonatomic, getter=isDocked) BOOL docked;
@property (nonatomic, getter=isWindowGuide) BOOL windowGuide;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic) BOOL addsHeightWhenUndocked;
@property (nonatomic) BOOL followsUndockedKeyboard;

- (void)encodeWithCoder:(id)a0;
- (void)_commonInit;
- (BOOL)shouldPauseEdgesForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)changeSizingConstants:(struct CGSize { double x0; double x1; })a0;
- (BOOL)changeOffsetConstants:(struct UIOffset { double x0; double x1; })a0;
- (void)updateShouldPauseEdges:(BOOL)a0;

@end
