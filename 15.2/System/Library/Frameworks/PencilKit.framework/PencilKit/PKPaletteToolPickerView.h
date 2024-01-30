@class UIStackView, PKPaletteAttributeViewController, NSHashTable, PKPaletteToolPickerOverlayView, PKPaletteToolView, NSArray, NSString, NSMutableArray, UIScrollView;
@protocol PKDrawingPaletteStatistics, PKPaletteToolPickerViewDelegate;

@interface PKPaletteToolPickerView : UIView <UIPopoverPresentationControllerDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPalettePopoverUpdating, PKPaletteViewSizeScaling> {
    NSMutableArray *_mutableToolViews;
}

@property (retain, nonatomic) id<PKDrawingPaletteStatistics> drawingPaletteStatistics;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteToolPickerOverlayView *overlayView;
@property (retain, nonatomic) NSMutableArray *toolsWidthConstraints;
@property (retain, nonatomic) NSMutableArray *toolsHeightConstraints;
@property (retain, nonatomic) NSMutableArray *toolsWidthCompactConstraints;
@property (retain, nonatomic) PKPaletteToolView *lastSelectedToolView;
@property (retain, nonatomic) PKPaletteAttributeViewController *toolAttributesPopover;
@property (retain, nonatomic) NSHashTable *presentedViewControllers;
@property (readonly, nonatomic) unsigned long long _selectedToolsCount;
@property (weak, nonatomic) id<PKPaletteToolPickerViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *toolViews;
@property (readonly, nonatomic) PKPaletteToolView *selectedToolView;
@property (readonly, nonatomic) unsigned long long indexOfSelectedTool;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic) double interItemToolsSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)_updateUI;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (BOOL)_useCompactSize;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (void)updatePopoverUI;
- (BOOL)hasToolViewWithIdentifier:(id)a0;
- (void)insertToolView:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeToolViewsWithIdentifier:(id)a0;
- (void)selectToolViewAtIndex:(unsigned long long)a0;
- (void)toggleSelectedToolAndEraser;
- (void)toggleSelectedToolAndLastSelectedTool;
- (void)reloadToolViewsWithDataSource:(id)a0;
- (id)initWithToolViews:(id)a0;
- (void)_installScrollViewInView:(id)a0;
- (void)_installStackViewInScrollView:(id)a0;
- (void)_installOverlayViewInView:(id)a0;
- (void)addToolView:(id)a0;
- (void)_toolTapGestureRecognizer:(id)a0;
- (void)removeToolView:(id)a0;
- (void)_showToolAttributesPopover;
- (void)_setSelectedToolView:(id)a0 animated:(BOOL)a1 notifyDelegate:(BOOL)a2;
- (BOOL)_canSelectToolView:(id)a0;
- (void)_unselectAllToolsAndDo:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceRectForPopoverPresentationForTool:(id)a0;
- (id)sourceViewForPopoverPresentationForTool:(id)a0;
- (BOOL)_canPresentToolAttributesPopover;
- (long long)_stackViewAxis;
- (double)_widthForToolAtIndex:(unsigned long long)a0 isCompactSize:(BOOL)a1;
- (id)_eraserToolView;
- (BOOL)canToggleSelectedToolAndEraser;
- (BOOL)canToggleSelectedToolAndLastSelectedTool;
- (id)_firstInkingTool;
- (BOOL)_isAllToolsColorUserInterfaceStyleEqualsTo:(long long)a0;
- (BOOL)_isAllToolsEdgeLocationEqualsTo:(unsigned long long)a0;

@end
