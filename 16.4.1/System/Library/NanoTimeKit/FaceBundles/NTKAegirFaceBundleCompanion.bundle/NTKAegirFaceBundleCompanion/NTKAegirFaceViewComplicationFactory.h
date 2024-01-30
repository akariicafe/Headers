@interface NTKAegirFaceViewComplicationFactory : NTKDigitialUtilitarianFaceViewComplicationFactory

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topComplicationFrame;

- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (BOOL)fadesComplicationSlot:(id)a0 inEditMode:(long long)a1 faceView:(id)a2;
- (void)loadLayoutRulesForFaceView:(id)a0;

@end
