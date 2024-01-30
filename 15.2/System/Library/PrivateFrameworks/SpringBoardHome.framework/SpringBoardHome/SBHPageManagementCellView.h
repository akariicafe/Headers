@class SBFolder, SBHPageManagementCheckbox, NSString, UIView, SBIconListView, MTMaterialView;

@interface SBHPageManagementCellView : UIView <SBIconListModelObserver, SBFolderObserver> {
    struct SBHPageManagementCellMetrics { struct CGSize { double width; double height; } fullListViewSize; struct CGSize { double width; double height; } scaledListViewSize; struct UIEdgeInsets { double top; double left; double bottom; double right; } foregroundInsets; struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundInsets; double listViewVerticalPositionAdjustment; double toggleButtonDiameter; double toggleButtonVerticalMargin; } _metrics;
}

@property (readonly, nonatomic) SBIconListView *listView;
@property (readonly, nonatomic) MTMaterialView *listBackgroundView;
@property (readonly, nonatomic) UIView *listHighlightView;
@property (readonly, nonatomic) MTMaterialView *toggleButtonBackgroundView;
@property (readonly, nonatomic) SBFolder *folder;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (nonatomic) BOOL scalesListView;
@property (readonly, nonatomic) SBHPageManagementCheckbox *toggleButton;
@property (nonatomic, getter=isListHighlighted) BOOL listHighlighted;
@property (nonatomic) BOOL hasCleanedUpListView;
@property (nonatomic) double toggleButtonAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)folder:(id)a0 listHiddenDidChange:(id)a1;
- (void).cxx_destruct;
- (void)iconListHiddenDidChange:(id)a0;
- (id)initWithListView:(id)a0 listBackgroundView:(id)a1 toggleButtonBackgroundView:(id)a2 folder:(id)a3 metrics:(struct SBHPageManagementCellMetrics { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; double x4; double x5; double x6; })a4 toggleButtonAllowed:(BOOL)a5;
- (void)cleanUpListView;
- (void)_togglePageHidden:(id)a0;

@end
