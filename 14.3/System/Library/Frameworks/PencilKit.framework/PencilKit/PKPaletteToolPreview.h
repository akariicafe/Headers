@class UIColor, UILayoutGuide, NSString, NSLayoutConstraint, PKPaletteToolView;
@protocol PKPalettePopoverPresenting, PKPaletteColorPickerController, PKPaletteToolPreviewDelegate;

@interface PKPaletteToolPreview : UIView <UIPopoverPresentationControllerDelegate, PKPaletteColorPickerControllerDelegate, PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>

@property (retain, nonatomic) PKPaletteToolView *toolView;
@property (retain, nonatomic) id<PKPaletteColorPickerController> colorPickerController;
@property (retain, nonatomic) NSLayoutConstraint *toolViewTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *toolViewHeightAnchor;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideCenterXConstraint;
@property (nonatomic, getter=isToolViewVisible) BOOL toolViewVisible;
@property (weak, nonatomic) id<PKPalettePopoverPresenting, PKPaletteToolPreviewDelegate> delegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) UIColor *toolColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)toggleColorSelectionPopover;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (void)showPreviewForTool:(id)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popoverPresentingSourceRect;
- (id)_popoverPresentingSourceview;
- (void)colorPickerControllerDidChangeSelectedColor:(id)a0;
- (void)_updateLayoutGuideConstraints;
- (void)_replaceCurrentToolWithToolWithIdentifier:(id)a0;
- (void)_updateToolViewInkingToolAttributesFromTool:(id)a0;
- (void)_animateToolViewToVisible:(BOOL)a0 completion:(id /* block */)a1;
- (double)_toolViewTopSpacing;
- (void)_showColorSelectionPopover;

@end
