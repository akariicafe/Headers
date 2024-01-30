@class NSArray, NSString, NSMutableOrderedSet, UIView, TUIAssistantButtonSizeProvider, _UIButtonBarButtonVisualProvider;
@protocol _UIButtonBarAppearanceDelegate, TUIAssistantButtonBarViewDelegate;

@interface TUIAssistantButtonBarView : UIView <TUIButtonBarViewProvider>

@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) NSMutableOrderedSet *groupViews;
@property (retain, nonatomic) TUIAssistantButtonSizeProvider *sizeProvider;
@property (retain, nonatomic) NSArray *buttonGroups;
@property (retain, nonatomic) NSArray *separatorGroups;
@property (retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (nonatomic) double minimumInterItemSpace;
@property (nonatomic) double effectiveInterItemSpacing;
@property (nonatomic) double barButtonWidth;
@property (nonatomic) long long buttonAlignment;
@property (nonatomic) BOOL constrainedHorizontally;
@property (weak, nonatomic) id<TUIAssistantButtonBarViewDelegate> delegate;
@property (nonatomic) double horizontalMargins;
@property (weak, nonatomic) id<_UIButtonBarAppearanceDelegate> appearanceDelegate;
@property (readonly, nonatomic) BOOL hasVisibleItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredSizeForButtonBarItem:(id)a0;
- (void)_updateBarButtonItemHiddenState;
- (void)preferredSizeDidChangeForGroup:(id)a0;
- (id)_allVisibleBarItemViews;
- (void)_checkBarButtonItemState:(id)a0;
- (void)_collapseGroupsIfNecessaryForWidth:(double)a0;
- (BOOL)_containsFlexibleGroupViews;
- (void)_didTapButtonBarButton:(id)a0 withEvent:(id)a1;
- (id)_groupViewForBarButtonItemGroup:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_insetsForHorizontalMargin;
- (double)_interItemSpacingThatFits:(struct CGSize { double x0; double x1; })a0 forGroupSize:(struct CGSize { double x0; double x1; })a1;
- (id)_itemViewForSender:(id)a0;
- (struct CGSize { double x0; double x1; })_totalGroupSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_uncollapseAllGroupsForNewSizeIfNecessary:(struct CGSize { double x0; double x1; })a0;
- (id)_uncollapsedGroupViews;
- (id)_visibleGroupViews;
- (id)_visibleGroups;
- (struct CGSize { double x0; double x1; })collapsedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureButtonBarItemView:(id)a0 forItem:(id)a1 group:(id)a2;
- (BOOL)isKeyboardGroup:(id)a0;
- (void)preferredSizeDidChangeForButtonBarItem:(id)a0;
- (void)setButtonGroups:(id)a0 animated:(BOOL)a1;
- (void)uncollapseAllGroups;
- (BOOL)validateButtonGroup:(id)a0;
- (BOOL)validateButtonGroups;

@end
