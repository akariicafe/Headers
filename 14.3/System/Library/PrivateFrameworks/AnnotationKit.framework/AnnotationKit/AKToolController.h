@class AKController;

@interface AKToolController : NSObject

@property (weak) AKController *controller;
@property (nonatomic) BOOL allInkEnabled;
@property (nonatomic) BOOL pencilInkEnabled;
@property (readonly, nonatomic) BOOL isInDefaultMode;
@property (nonatomic) unsigned long long toolMode;

+ (void)cascadeAnnotations:(id)a0 onPageController:(id)a1 forPaste:(BOOL)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithController:(id)a0;
- (void)resetToDefaultMode;
- (void)addNewAnnotation:(id)a0 onPageController:(id)a1 shouldSelect:(BOOL)a2 shouldCascade:(BOOL)a3;
- (id)createAnnotationOfType:(long long)a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_peripheralAvailabilityDidUpdate:(id)a0;
- (void)performToolActionForSender:(id)a0;
- (BOOL)isToolSenderEnabled:(id)a0;
- (void)updateToolSenderState:(id)a0 enabled:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_defaultCenterForNewAnnotation;
- (double)_modelBaseScaleFactorForNewAnnotation;
- (id)_defaultFillColorForAnnotationOfClass:(Class)a0;
- (double)_strokeWidthForNewAnnotation;
- (id)_strokeColorForNewAnnotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultRectangleForNewAnnotation:(id)a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)_defaultTypingAttributes;
- (unsigned long long)_arrowStyleForToolTag:(long long)a0;
- (id)_defaultTextBoxTypingAttributes;
- (id)_defaultHeartTypingAttributesWithFillColor:(id)a0;
- (void)_setRectangleToFitTextOnTextAnnotation:(id)a0;
- (unsigned long long)defaultToolMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validatedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fitsInVisibleRegionOfOverlayView:(id)a1 ownedByPageController:(id)a2 centeredAtPoint:(struct CGPoint { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;

@end
