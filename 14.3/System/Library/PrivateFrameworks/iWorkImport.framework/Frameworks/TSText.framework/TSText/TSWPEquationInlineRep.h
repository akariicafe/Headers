@class NSString, TSWPEquationInfo, CALayer, TSWPEquationInlineLayout;

@interface TSWPEquationInlineRep : TSWPEquationBaseRep <CALayerDelegate>

@property (nonatomic) BOOL layerContentsAreFlipped;
@property (retain, nonatomic) CALayer *equationLayer;
@property (readonly, nonatomic) TSWPEquationInlineLayout *equationLayout;
@property (readonly, nonatomic) TSWPEquationInfo *equationInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (BOOL)isPlaceholder;
- (void)willBeRemoved;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (BOOL)canDrawInParallel;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (BOOL)shouldAllowReplacementFromPaste;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(double)a3 withMask:(BOOL)a4 forLayer:(BOOL)a5 forShadow:(BOOL)a6 forHitTest:(BOOL)a7;
- (void)drawErrorIconInContext:(struct CGContext { } *)a0;
- (BOOL)p_shouldFlipShadowsInContext:(struct CGContext { } *)a0 forLayer:(BOOL)a1;
- (BOOL)canPasteDataFromPhysicalKeyboard:(id)a0;
- (id)resizedGeometryForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
