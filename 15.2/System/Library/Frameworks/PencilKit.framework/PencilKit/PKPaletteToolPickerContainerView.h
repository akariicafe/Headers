@class PKPaletteToolPickerView, NSString, NSLayoutConstraint;

@interface PKPaletteToolPickerContainerView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling>

@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewRightConstraint;
@property (readonly, nonatomic) PKPaletteToolPickerView *toolPickerView;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double scalingFactor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateUI;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;

@end
