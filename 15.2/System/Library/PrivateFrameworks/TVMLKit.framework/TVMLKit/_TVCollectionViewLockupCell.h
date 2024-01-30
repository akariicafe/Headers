@class NSString, UIView;
@protocol TVCollectionViewLockupCellDelegate, TVAuxiliaryViewSelecting;

@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting> {
    BOOL _pressIsAnimating;
    UIView<TVAuxiliaryViewSelecting> *__selectingView;
    BOOL _unpressOnEndAnimating;
    struct { BOOL respondsToDidUnfocus; BOOL respondsToDidSelect; BOOL respondsToLayeredImageContainerLayerWithinCollectionViewCell; } _delegateFlags;
}

@property (weak, nonatomic) id<TVCollectionViewLockupCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (BOOL)_descendantsShouldHighlight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })selectionMarginsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_showPressState;
- (void)_clearPressState;
- (void)_handleSelect;
- (id)_selectingView;
- (id)layeredImageContainerLayer;
- (id)selectingView;

@end
