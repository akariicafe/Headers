@class UIStackView, PKPaletteAttributeViewController, NSHashTable, PKPaletteToolPickerOverlayView, PKPaletteToolView, PKInk, NSArray, NSString, NSMutableArray, UIScrollView;
@protocol PKPalettePopoverPresenting, PKDrawingPaletteStatistics, PKPaletteToolPickerViewDelegate;

@interface PKPaletteToolPickerView : UIView <UIPopoverPresentationControllerDelegate, PKEdgeLocatable, PKPalettePopoverDismissing, PKPalettePopoverUpdating, PKPaletteViewSizeScaling>

@property (retain, nonatomic) id<PKDrawingPaletteStatistics> drawingPaletteStatistics;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteToolPickerOverlayView *overlayView;
@property (retain, nonatomic) NSMutableArray *toolViews;
@property (retain, nonatomic) NSMutableArray *toolsWidthConstraints;
@property (retain, nonatomic) NSMutableArray *toolsHeightConstraints;
@property (retain, nonatomic) NSMutableArray *toolsWidthCompactConstraints;
@property (retain, nonatomic) PKPaletteToolView *lastSelectedTool;
@property (retain, nonatomic) PKPaletteAttributeViewController *toolAttributesPopover;
@property (retain, nonatomic) NSHashTable *presentedViewControllers;
@property (readonly, nonatomic) unsigned long long _selectedToolsCount;
@property (weak, nonatomic) id<PKPalettePopoverPresenting, PKPaletteToolPickerViewDelegate> delegate;
@property (readonly, nonatomic) PKPaletteToolView *selectedToolView;
@property (retain, nonatomic) PKInk *selectedToolInk;
@property (copy, nonatomic) NSArray *toolIdentifiers;
@property (copy, nonatomic) NSArray *toolProperties;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly, nonatomic) BOOL selectedToolSupportsDisplayingSelectedColor;
@property (readonly, nonatomic) BOOL selectedToolSupportsChangingColor;
@property (nonatomic, getter=isUsingShortestToolSpacing) BOOL usingShortestToolSpacing;
@property (nonatomic) BOOL showsHandwritingTool;
@property (copy, nonatomic) NSString *handwritingToolLocaleIdentifier;
@property (readonly, nonatomic, getter=isHandwritingToolSelected) BOOL handwritingToolSelected;
@property (readonly, nonatomic, getter=isLassoToolSelected) BOOL lassoToolSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

+ (id)defaultToolIdentifiers;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_useCompactSize;
- (void)updateConstraints;
- (void)_updateUI;
- (void)traitCollectionDidChange:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (double)_stackViewSpacing;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (void)updatePopoverUI;
- (void)selectToolWithIdentifier:(id)a0;
- (void)setSelectedToolInkColor:(id)a0 ignoreColorOpacity:(BOOL)a1;
- (void)toggleBetweenLastSelectedToolAndEraser;
- (void)toggleBetweenLastSelectedToolAndCurrentlySelectedTool;
- (void)_installScrollViewInView:(id)a0;
- (void)_installStackViewInScrollView:(id)a0;
- (void)_installToolViewsWithIdentifiers:(id)a0;
- (void)_installOverlayViewInView:(id)a0;
- (void)_selectDefaultInkingTool;
- (void)_setupDefaultLastSelectedTool;
- (id)_firstInkingTool;
- (void)_selectToolView:(id)a0;
- (id)_eraserToolView;
- (id)_toolViewWithIdentifier:(id)a0;
- (void)_removeToolView:(id)a0;
- (id)toolsFromToolIdentifiers:(id)a0;
- (void)_insertToolView:(id)a0 atUserInterfaceIndex:(unsigned long long)a1;
- (BOOL)_canInsertToolView:(id)a0;
- (void)_toolTapGestureRecognizer:(id)a0;
- (void)_showToolAttributesPopover;
- (id)_selectedToolView;
- (BOOL)_canSelectToolWithIdentifier:(id)a0;
- (void)_unselectAllTools;
- (void)_toolAttributesDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceRectForPopoverPresentationForTool:(id)a0;
- (id)sourceViewForPopoverPresentationForTool:(id)a0;
- (BOOL)_canPresentToolAttributesPopover;
- (void)_installHandwritingToolIfNeeded;
- (BOOL)_isHandwritingToolInstalled;
- (void)_removeHandwritingTool;
- (id)_handwritingToolView;
- (void)_updateToolsUI;
- (void)_rebuildAndActivateToolsLayoutConstraints;
- (BOOL)_isAllToolsColorUserInterfaceStyleEqualsTo:(long long)a0;
- (BOOL)_isAllToolsEdgeLocationEqualsTo:(unsigned long long)a0;

@end
