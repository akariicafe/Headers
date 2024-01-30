@class UIColor, NSArray, UICollectionView, NSString, PKPaletteMulticolorSwatch, UILongPressGestureRecognizer;
@protocol PKPalettePopoverPresenting, PKPaletteColorPickerController, PKPaletteColorPickerViewDelegate;

@interface PKPaletteColorPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, UIGestureRecognizerDelegate, PKPaletteColorPickerControllerDelegate, PKEdgeLocatable, PKPaletteQuickColorPicking, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *swatches;
@property (retain, nonatomic) PKPaletteMulticolorSwatch *multicolorSwatch;
@property (retain, nonatomic) NSArray *swatchColors;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) id<PKPaletteColorPickerController> colorPickerController;
@property (retain, nonatomic) UIColor *analyticsInitialColor;
@property (nonatomic) long long analyticsColorChangeCount;
@property (weak, nonatomic) id<PKPalettePopoverPresenting, PKPaletteColorPickerViewDelegate> delegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) long long colorPickerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

+ (id)collectionViewFlowLayoutWithItemSize:(struct CGSize { double x0; double x1; })a0 minimumLineSpacing:(double)a1 minimumInteritemSpacing:(double)a2;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangePreferredContentSize:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)toggleColorSelectionPopover;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (void)updatePopoverUI;
- (struct CGSize { double x0; double x1; })swatchSize;
- (id)_swatchColorsForTraitCollection:(id)a0;
- (void)_swatchLongPressHandler:(id)a0;
- (void)_enableOrDisableLongPressGesture;
- (unsigned long long)_multicolorSwatchIndexForEdge:(unsigned long long)a0;
- (void)_showExtendedColorPicker;
- (void)_reloadSwatchColorsForTraitCollection:(id)a0;
- (BOOL)_shouldDisplayExtendedColorPickerPopoverFromColorSwatch:(id)a0;
- (id)_selectedSwatch;
- (BOOL)_colorPickerAllowsColorSelection;
- (id)swatchWithColor:(id)a0;
- (void)_setMulticolorSwatchColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popoverPresentingSourceRect;
- (id)_popoverPresentingSourceview;
- (void)reloadColorsForCurrentColorPickerMode;
- (id)swatchWithIdentifier:(id)a0;
- (id)traitCollectionWithCurrentInterfaceStyle;
- (void)colorPickerControllerDidChangeSelectedColor:(id)a0;
- (id)colorAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
