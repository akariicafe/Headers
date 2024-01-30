@class NSString;

@interface SBHRootFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {
    struct SBRootFolderViewPageManagementLayoutMetrics { struct CGSize { double width; double height; } cellSpacing; double bottomMargin; } _pageManagement2x1LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics { struct CGSize { double width; double height; } cellSpacing; double bottomMargin; } _pageManagement2x2LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics { struct CGSize { double width; double height; } cellSpacing; double bottomMargin; } _pageManagement3x2LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics { struct CGSize { double width; double height; } cellSpacing; double bottomMargin; } _pageManagement3x3LayoutMetrics;
}

@property (nonatomic) double idleTextVerticalOffset;
@property (nonatomic) double pageControlVerticalOffset;
@property (nonatomic) struct CGSize { double width; double height; } pageControlFrameInset;
@property (nonatomic) struct CGSize { double width; double height; } pageControlCustomPadding;
@property (nonatomic) double pageManagementPageCheckboxVerticalMargin;
@property (nonatomic) double pageManagementPageCheckboxDiameter;
@property (nonatomic) double dockViewHeight;
@property (nonatomic) double dockBackgroundViewCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } dockBackgroundViewInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } dockListViewInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } editModeButtonContentEdgeInsets;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } editModeButtonLayoutOffset;
@property (nonatomic) struct CGSize { double width; double height; } editModeButtonSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct SBRootFolderViewPageManagementLayoutMetrics { struct CGSize { double x0; double x1; } x0; double x1; })pageManagementLayoutMetricsForLayoutConfiguration:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)setPageManagementLayoutMetrics:(struct SBRootFolderViewPageManagementLayoutMetrics { struct CGSize { double x0; double x1; } x0; double x1; })a0 forLayoutConfiguration:(long long)a1;

@end
