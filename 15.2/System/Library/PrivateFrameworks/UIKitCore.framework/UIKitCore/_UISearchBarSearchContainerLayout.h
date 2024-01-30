@class UIView, UISearchBarTextField;
@protocol _UISearchBarContainerSublayoutDelegate;

@interface _UISearchBarSearchContainerLayout : _UISearchBarLayoutBase {
    struct { unsigned char hasCancelButton : 1; unsigned char hasDeleteButton : 1; unsigned char hasLeftButton : 1; unsigned char allowSearchFieldShrinkage : 1; unsigned char searchFieldUsesCustomBackgroundImage : 1; unsigned char searchFieldEffectivelySupportsDynamicType : 1; unsigned char searchFieldRespectsReadableWidth : 1; unsigned char searchFieldWidthIsReduced : 1; } _searchContainerLayoutFlags;
    double _searchFieldForegroundFadeAlpha;
    double _searchFieldBackgroundFadeAlpha;
}

@property (weak, nonatomic) id<_UISearchBarContainerSublayoutDelegate> delegate;
@property (readonly, nonatomic) double naturalBarHeight;
@property (readonly, nonatomic) double naturalSearchFieldHeight;
@property (retain, nonatomic) UISearchBarTextField *searchField;
@property (retain, nonatomic) UIView *cancelButton;
@property (retain, nonatomic) UIView *deleteButton;
@property (retain, nonatomic) UIView *leftButton;
@property (nonatomic) BOOL hasCancelButton;
@property (nonatomic) BOOL hasDeleteButton;
@property (nonatomic) BOOL hasLeftButton;
@property (nonatomic) BOOL allowSearchFieldShrinkage;
@property (nonatomic) BOOL searchFieldUsesCustomBackgroundImage;
@property (nonatomic) BOOL searchFieldEffectivelySupportsDynamicType;
@property (nonatomic) BOOL searchFieldRespectsReadableWidth;
@property (nonatomic) double searchBarReadableWidth;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } searchFieldBackgroundPositionAdjustment;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } searchFieldLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cancelButtonLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } deleteButtonLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftButtonLayoutFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleCancelButtonSearchFieldLayoutFrame;
@property (readonly, nonatomic) BOOL searchFieldWidthIsReduced;
@property (copy, nonatomic) id /* block */ delegateSearchFieldFrameForProposedFrame;
@property (copy, nonatomic) id /* block */ layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback;
@property (nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge;
@property (nonatomic) double additionalPaddingForSearchFieldAtLeadingEdge;

- (void)applyLayout;
- (void)updateLayout;
- (double)searchFieldHeightUpdatingShrinkageAndFadeAlphas;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)sendWillLayoutSubviewsForSearchFieldContainerView:(id)a0;

@end
