@class UIView, AKLegacyDoodleController, AKAttributeController, AKActionController, AKModelController, AKUndoController, AKMainEventHandler, AKToolController, AKSignatureModelController;
@protocol AKControllerDelegateProtocol;

@interface AKControllerForTesting : AKController

@property (retain) id<AKControllerDelegateProtocol> testingDelegate;
@property (retain) AKModelController *testingModelController;
@property (retain) AKActionController *testingActionController;
@property (retain) AKToolController *testingToolController;
@property (retain) AKAttributeController *testingAttributeController;
@property (retain) AKUndoController *testingUndoController;
@property (retain) AKMainEventHandler *testingMainEventHandler;
@property (retain) UIView *testingToolbarView;
@property (retain) UIView *testingOverlayView;
@property (retain) AKLegacyDoodleController *testingIntelligentSketchController;
@property (retain) AKSignatureModelController *testingSignatureModelController;

+ (void)renderAnnotation:(id)a0 inContext:(struct CGContext { } *)a1;

- (id)init;
- (id)overlayView;
- (void).cxx_destruct;
- (id)actionController;
- (id)toolbarView;
- (id)toolController;
- (id)delegate;
- (id)modelController;
- (void)performActionForSender:(id)a0;
- (id)mainEventHandler;
- (id)attributeController;
- (id)signatureModelController;
- (id)undoController;
- (BOOL)validateSender:(id)a0;
- (id)legacyDoodleController;
- (void)updateOverlayViewAtIndex:(unsigned long long)a0;
- (void)setOverlayShouldPixelate:(BOOL)a0;
- (void)reloadVisibleToolbarItemIdentifiers;

@end
