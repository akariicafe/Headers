@class UIStackView, NSString, PKPaletteToolPickerView, PKDrawingPaletteInputAssistantView, PKPaletteColorPickerContainerView, PKPaletteToolPickerContainerView, NSLayoutConstraint, PKPaletteColorPickerView;

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteToolPickerContainerView *toolPickerContainerView;
@property (retain, nonatomic) PKPaletteColorPickerContainerView *colorPickerContainerView;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *compactToolPickerContainerViewWidthConstraint;
@property (readonly, nonatomic) PKPaletteToolPickerView *toolPickerView;
@property (readonly, nonatomic) PKPaletteColorPickerView *colorPickerView;
@property (nonatomic) BOOL wantsColorPickerContainerViewInHierarchy;
@property (readonly, nonatomic) PKDrawingPaletteInputAssistantView *paletteInputAssistantView;
@property (nonatomic) long long contextEditingMode;
@property (nonatomic) BOOL isSmallestSupportedCompactWidth;
@property (nonatomic, getter=isColorPickerViewVisible) BOOL colorPickerViewVisible;
@property (nonatomic, getter=isInputAssistantViewVisible) BOOL inputAssistantViewVisible;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double scalingFactor;

- (void)_updateUI;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (BOOL)_useCompactSize;
- (double)_stackViewSpacing;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (BOOL)_hasColorPickerContainerView;

@end
