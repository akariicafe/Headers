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

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBottomAlignedkeylineLabelFrameForText:(id)a0;

- (BOOL)_wheelChangedWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithFace:(id)a0;
- (void)activate;
- (void)willActivate;
- (BOOL)isTransitioningBetweenEditPages;
- (void)setLabelAlignment:(unsigned long long)a0 forKey:(id)a1 editMode:(long long)a2;
- (void)setSelectedKeylineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1 editMode:(long long)a2;
- (void)setDeselectedKeylineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1 editMode:(long long)a2;
- (BOOL)_handlePhysicalButton:(unsigned long long)a0 event:(unsigned long long)a1;
- (void)setBackgroundFillAlpha:(double)a0;
- (void)setEditingContentViewController:(id)a0 forEditMode:(long long)a1;
- (struct CGPoint { double x0; double x1; })pageOffsetFromCenter:(long long)a0;
- (void)applyTransformForCurrentPageView:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)applyTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })colorPickerFrame;
- (void)willDeactivate;
- (void)deactivateWithCompletion:(id /* block */)a0;
- (void)updateSelectionForKeylineAtSlot:(id)a0 selected:(BOOL)a1;
- (void)setInfoText:(id)a0 forEditMode:(long long)a1;
- (void)addKeyline:(id)a0 forKey:(id)a1 tappable:(BOOL)a2 editMode:(long long)a3;
- (void)setLabelText:(id)a0 forKey:(id)a1 editMode:(long long)a2;
- (void)setLabelActiveAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forKey:(id)a1 editMode:(long long)a2;
- (void)selectKeylineForKey:(id)a0 editMode:(long long)a1;
- (void)removeAllKeylinesForEditMode:(long long)a0;
- (void)setForEditMode:(long long)a0 numberOfLisaValues:(unsigned long long)a1 currentValue:(unsigned long long)a2 valueHeight:(double)a3;
- (void)setForEditMode:(long long)a0 numberOfLisaValues:(unsigned long long)a1 currentValue:(unsigned long long)a2 valueHeight:(double)a3 animated:(BOOL)a4 detentType:(unsigned long long)a5;
- (void)setForEditMode:(long long)a0 gestureDidStopHandler:(id /* block */)a1;
- (void)setForEditMode:(long long)a0 gestureDidScrollHandler:(id /* block */)a1;
- (void)setForEditMode:(long long)a0 gestureDiscreteScrollHandler:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineFrameAtSlot:(id)a0;

@end
