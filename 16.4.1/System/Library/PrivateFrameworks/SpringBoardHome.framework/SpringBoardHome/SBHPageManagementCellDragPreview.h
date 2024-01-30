@class SBIconView, SBIcon, NSHashTable;

@interface SBHPageManagementCellDragPreview : UIView <SBIconDragPreview> {
    NSHashTable *_cleanupDelayAssertions;
}

@property (retain, nonatomic) SBIconView *referenceIconView;
@property (retain, nonatomic) SBIconView *iconView;
@property (nonatomic, getter=isDelayingCleanup) BOOL delayingCleanup;
@property (nonatomic) unsigned long long dragState;
@property (nonatomic, getter=isFlocked) BOOL flocked;
@property (nonatomic) BOOL iconAllowsLabelArea;
@property (nonatomic) BOOL iconAllowsAccessory;
@property (nonatomic) BOOL iconCanShowCloseBox;
@property (nonatomic) double iconContentScale;
@property (nonatomic) BOOL iconIsEditing;
@property (retain, nonatomic) SBIcon *icon;
@property (copy, nonatomic) id /* block */ cleanUpHandler;

- (void)setIconViewDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_configureIconViewWithReferenceIconView:(id)a0;
- (id)_pageManagementCellView;
- (void)_removeDelayCleanupAssertion:(id)a0;
- (id)delayCleanUpForReason:(id)a0;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)a0;
- (void)dropDestinationAnimationCompleted;
- (void)handleCleanup;
- (id)initWithReferenceIconView:(id)a0;
- (void)setIconIsEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)updateDestinationIconLocation:(id)a0 allowsLabelArea:(BOOL)a1 animated:(BOOL)a2;

@end
