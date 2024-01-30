@class NSString, TSDCanvas, TPDocumentRoot;
@protocol TSDCanvasProxyDelegate;

@interface TPPageControllerCanvasDelegate : NSObject <TSDCanvasDelegate> {
    TPDocumentRoot *_documentRoot;
}

@property (readonly, nonatomic) TSDCanvas *canvas;
@property (nonatomic) unsigned long long textLayoutMustIncludeAdornmentsCounter;
@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void).cxx_destruct;
- (void)dealloc;
- (id)documentRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleScaledBoundsForClippingRepsOnCanvas:(id)a0;
- (BOOL)shouldShowInstructionalTextForLayout:(id)a0;
- (BOOL)wantsEditingLayoutsForOffscreenInfos;
- (BOOL)textLayoutMustIncludeAdornments;
- (id)initWithDocumentRoot:(id)a0 canvas:(id)a1;

@end
