@class NSArray, NSString, AVControlOverflowButton;
@protocol AVMobileAuxiliaryControlsViewDelegate;

@interface AVMobileAuxiliaryControlsView : AVView <AVMobileAuxiliaryControlDelegate, AVControlOverflowButtonDelegate> {
    AVControlOverflowButton *_overflowControl;
    NSArray *_controlsInPriorityOrder;
}

@property (nonatomic) BOOL hasOverflowOnlyControl;
@property (weak, nonatomic) id<AVMobileAuxiliaryControlsViewDelegate> delegate;
@property (retain, nonatomic) NSArray *controls;
@property (nonatomic) double controlSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateHasOverflowOnlyControl;
- (BOOL)_requiresOverflowControl;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)a0;
- (void)_updateOverflowControlContextMenu;
- (void)auxiliaryControlDidChangeState:(id)a0;
- (void)overflowButtonDidHideContextMenu:(id)a0;
- (void)layoutSubviews;
- (void)updateOverflowMenu;
- (id)overflowMenuItemsForControlOverflowButton:(id)a0;
- (id)init;
- (void)_updatePriorityOrderControlsList;
- (struct CGSize { double x0; double x1; })sizeFittingControls:(id)a0;
- (void)overflowButtonWillShowContextMenu:(id)a0;
- (void).cxx_destruct;
- (id)_controlsWithViewsInPriorityOrder;
- (id)_overflowControl;

@end
