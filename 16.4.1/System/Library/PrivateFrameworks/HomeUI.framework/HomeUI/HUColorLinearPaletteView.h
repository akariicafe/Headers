@class NSString, UICollectionViewFlowLayout, HFColorPaletteColor, HFColorPalette, UISelectionFeedbackGenerator, UICollectionView, HUQuickControlColorViewProfile, UIImpactFeedbackGenerator, NSIndexPath;
@protocol HUQuickControlColorPaletteViewInteractionDelegate;

@interface HUColorLinearPaletteView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HUQuickControlInteractiveView>

@property (retain, nonatomic) HFColorPalette *calibratedColorPalette;
@property (retain, nonatomic) HFColorPaletteColor *selectedColor;
@property (retain, nonatomic) NSIndexPath *prevSelectedColorIndexPath;
@property (retain, nonatomic) UICollectionView *colorSwatchCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (weak, nonatomic) id<HUQuickControlColorPaletteViewInteractionDelegate> interactionDelegate;
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (retain, nonatomic) NSIndexPath *selectedColorIndexPath;
@property (retain, nonatomic) HFColorPalette *colorPalette;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

- (id)initWithProfile:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_actuateSelectionTapticFeedback;
- (void)_actuateImpactTapticFeedback;
- (unsigned long long)_indexForSelectedColor:(id)a0 includeBias:(BOOL)a1;
- (void)_prepareForTapticFeedback;
- (void)_setColorPalette:(id)a0 notifyDelegate:(BOOL)a1;
- (void)_setSelectedColor:(id)a0 notifyDelegate:(BOOL)a1 selectionChanged:(BOOL)a2;
- (void)_updateCalibratedColorPalette;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)initWithProfile:(id)a0 colorPalette:(id)a1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (void)updateSelectedColorIndexPathToIndexPath:(id)a0;

@end
