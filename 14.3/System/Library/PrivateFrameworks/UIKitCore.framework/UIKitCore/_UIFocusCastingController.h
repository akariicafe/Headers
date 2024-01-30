@protocol _UIFocusCastingControllerDelegate;

@interface _UIFocusCastingController : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } screenEntryPoint;
@property (nonatomic) unsigned long long entryPointAxis;
@property (nonatomic) BOOL isRememberingEntryPoint;
@property (weak, nonatomic) id<_UIFocusCastingControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_forgetEntryPoint;
- (struct CGPoint { double x0; double x1; })_castingPointInGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forHeading:(unsigned long long)a1;
- (void)_updateFocusItemFromGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withHeading:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_globalFrameForFocusItem:(id)a0;
- (unsigned long long)_axisForHeading:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_entryPointInGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forHeading:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })_movementPointInGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_focusEffectsControllerForFocusedItem;
- (void)_updateFocusFromItem:(id)a0 toItem:(id)a1 withHeading:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })castingFrameForFocusedGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 heading:(unsigned long long)a1;
- (void)updateFocusCastingWithContext:(id)a0;

@end
