@class NSArray, NSMutableDictionary, NSMapTable, NSMutableSet, NSMutableArray;
@protocol MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate, MPUTransportControlsViewDataSource;

@interface MPUTransportControlsView : UIView {
    NSMutableDictionary *_classByReuseIdentifier;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insetsForExpandingButtons;
    BOOL _sortedVisibleControlsWithBlanksNeedsReload;
    NSMutableDictionary *_recycledButtonsByReuseIdentifier;
    NSMapTable *_reuseIdentifierByButton;
    NSMutableArray *_sortedVisibleControlsWithBlanks;
    NSMutableSet *_typesOfControlsToReload;
    NSMutableDictionary *_visibleButtonByControlType;
}

@property (nonatomic, getter=_insetsForExpandingButtons, setter=_setInsetsForExpandingButtons:) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } insetsForExpandingButtons;
@property (nonatomic, getter=_usesLegacyLayoutHeuristics, setter=_setUsesLegacyLayoutHeuristics:) BOOL usesLegacyLayoutHeuristics;
@property (copy, nonatomic) NSArray *availableTransportControls;
@property (weak, nonatomic) id<MPUTransportControlsViewDataSource> dataSource;
@property (weak, nonatomic) id<MPUTransportControlsViewDelegate> delegate;
@property (weak, nonatomic) id<MPUTransportControlsViewLayoutDelegate> layoutDelegate;
@property (nonatomic) unsigned long long minimumNumberOfTransportButtonsForLayout;
@property (nonatomic) BOOL sortByGroup;

+ (id)defaultTransportControls;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_willRemoveTransportButton:(id)a0;
- (void)_recycleTransportButtonWithControlType:(long long)a0;
- (void)_reloadSortedVisibleControlsWithBlanks;
- (id)_typesOfVisibleControls;
- (id)_visibleTransportControlAtIndex:(unsigned long long)a0;
- (void)_configureTransportButton:(id)a0 forTransportControl:(id)a1;
- (struct CGSize { double x0; double x1; })_transportControlButtonSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedFrameOfButtonForTransportControl:(id)a0 proposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_typesFromTransportControls:(id)a0;
- (void)reloadTransportButtonWithControlType:(long long)a0;
- (id)_createTransportButtonWithReuseIdentifier:(id)a0;
- (void)_transportControlLongPressBegan:(id)a0;
- (void)_transportControlLongPressEnded:(id)a0;
- (void)_transportControlTapped:(id)a0;
- (void)_transportControlTouchEntered:(id)a0;
- (void)_transportControlTouchExited:(id)a0;
- (id)_availableTransportControlsForGroup:(int)a0;
- (id)availableTransportControlWithType:(long long)a0;
- (id)dequeueReusableTransportButtonWithReuseIdentifier:(id)a0;
- (void)registerClass:(Class)a0 forTransportButtonWithReuseIdentifier:(id)a1;
- (id)_transportButtonForControlType:(long long)a0;

@end
