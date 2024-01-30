@class NSString, UIViewController;
@protocol NTKFaceViewCustomEditing, NTKFaceEditViewDelegate;

@interface NTKFaceEditView : UIView <NTKClockHardwareInput>

@property (readonly, nonatomic) UIViewController<NTKFaceViewCustomEditing> *editingContentViewController;
@property (weak, nonatomic) id<NTKFaceEditViewDelegate> delegate;
@property (nonatomic) long long editMode;
@property (nonatomic) BOOL disableBreathingAnimationForComplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBottomAlignedKeylineLabelFrameForText:(id)a0;

- (BOOL)_wheelChangedWithEvent:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithFace:(id)a0;
- (BOOL)isTransitioningBetweenEditPages;
- (BOOL)_handlePhysicalButton:(unsigned long long)a0 event:(unsigned long long)a1;
- (void)addKeyline:(id)a0 forKey:(id)a1 tappable:(BOOL)a2 editMode:(long long)a3;
- (void)applyEditorPresentationProgress:(double)a0 fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toEditMode:(long long)a2 scaled:(BOOL)a3;
- (void)applyEditorPresentationProgress:(double)a0 toEditMode:(long long)a1 scaled:(BOOL)a2;
- (void)applyTransformForCurrentPageView:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)applyTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cachedScreenBottomAlignedKeylineLabelFrameForText:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })colorPickerFrame;
- (void)deactivateWithCompletion:(id /* block */)a0;
- (id)editingColorForColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineFrameAtSlot:(id)a0;
- (struct CGPoint { double x0; double x1; })pageOffsetFromCenter:(long long)a0;
- (void)reloadColorPicker;
- (void)removeAllKeylinesForEditMode:(long long)a0;
- (void)restartBreathing;
- (void)selectKeylineForKey:(id)a0 editMode:(long long)a1;
- (void)setBackgroundFillAlpha:(double)a0;
- (void)setDeselectedKeylineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1 editMode:(long long)a2;
- (void)setEditingContentViewController:(id)a0 forEditMode:(long long)a1;
- (void)setForEditMode:(long long)a0 gestureDidScrollHandler:(id /* block */)a1;
- (void)setForEditMode:(long long)a0 gestureDidStopHandler:(id /* block */)a1;
- (void)setForEditMode:(long long)a0 gestureDiscreteScrollHandler:(id /* block */)a1;
- (void)setForEditMode:(long long)a0 numberOfLisaValues:(unsigned long long)a1 currentValue:(unsigned long long)a2 valueHeight:(double)a3;
- (void)setForEditMode:(long long)a0 numberOfLisaValues:(unsigned long long)a1 currentValue:(unsigned long long)a2 valueHeight:(double)a3 animated:(BOOL)a4 detentType:(unsigned long long)a5;
- (void)setInfoText:(id)a0 forEditMode:(long long)a1;
- (void)setLabelActiveAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forKey:(id)a1 editMode:(long long)a2;
- (void)setLabelAlignment:(unsigned long long)a0 forKey:(id)a1 editMode:(long long)a2;
- (void)setLabelText:(id)a0 forKey:(id)a1 editMode:(long long)a2;
- (void)setSelectedKeylineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1 editMode:(long long)a2;
- (void)updateSelectionForKeylineAtSlot:(id)a0 selected:(BOOL)a1;
- (void)willActivate;
- (void)willDeactivate;

@end
