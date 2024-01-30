@class NSArray, UIBarButtonItemGroup, _UIButtonBarButtonVisualProvider, NSMutableArray;
@protocol TUIButtonBarViewProvider;

@interface TUIAssistantButtonBarGroupView : UIView {
    NSMutableArray *_visibleButtons;
    BOOL _collapsed;
}

@property (weak, nonatomic) id<TUIButtonBarViewProvider> buttonProvider;
@property (retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (retain, nonatomic) UIBarButtonItemGroup *barButtonItemGroup;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, nonatomic) NSArray *visibleButtons;
@property (nonatomic) double itemSpacing;
@property (readonly, nonatomic) BOOL containsFlexibleItems;

- (void)_itemDidChangeHiddenState:(id)a0;
- (void)_itemDidChangeEnabledState:(id)a0;
- (void)_itemDidChangeWidth:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_itemCustomViewDidChange:(id)a0 fromView:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithBarButtonItemGroup:(id)a0 visualProvider:(id)a1 buttonProvider:(id)a2;
- (BOOL)_canBeCollapsed;
- (id)_visibleItemsAllowingCollapse:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_preferredSizeForItems:(id)a0 fittingWidth:(double)a1;
- (void)_ensureVisibleButtonsForVisibleItems;
- (id)_buttonBarItemViewForBarButtonItem:(id)a0;
- (void)_itemDidChangeSelectionState:(id)a0;
- (void)_itemStandardViewNeedsUpdate:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_visibleItems;

@end
