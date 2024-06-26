@class AKHighlightAnnotationController, AKLegacyDoodleController, AKFormFeatureDetectorController, AKPageController, AKToolController, NSString, AKSignaturesController, NSArray, AKTextEditorController, AKUndoController, AKMainEventHandler, UIView, PKToolPicker, AKSparseMutableControllerArray, AKActionController, AKSignatureModelController, AKToolbarViewController, AKSidecarController, AKAttributeController, AKModelController, AKStatistics, NSMapTable, AKToolbarView, AKPeripheralAvailabilityManager_iOS;
@protocol PKRulerHostingDelegate, AKControllerDelegateProtocol, AKControllerOverlayInteractionProtocol;

@interface AKController : NSObject {
    BOOL _isEditingAnnotation;
    BOOL _toolPickerVisibleBeforeTextEditing;
}

@property BOOL isTestingInstance;
@property BOOL isTornDown;
@property (retain) AKSparseMutableControllerArray *pageControllers;
@property (retain) NSMapTable *pageModelControllersToPageControllers;
@property (weak) id<AKControllerDelegateProtocol> delegate;
@property (retain) AKActionController *actionController;
@property (retain) AKToolController *toolController;
@property (retain) AKToolbarViewController *toolbarViewController;
@property (retain) AKAttributeController *attributeController;
@property (retain) AKModelController *modelController;
@property (retain) AKUndoController *undoController;
@property (retain) AKSidecarController *sidecarController;
@property (retain) AKMainEventHandler *mainEventHandler;
@property (retain) AKTextEditorController *textEditorController;
@property (retain) AKLegacyDoodleController *legacyDoodleController;
@property (retain) UIView *toolbarView;
@property (retain) AKSignatureModelController *signatureModelController;
@property (retain) AKFormFeatureDetectorController *formDetectionController;
@property (retain) AKHighlightAnnotationController *highlightAnnotationController;
@property (retain) AKStatistics *statisticsLogger;
@property (retain) AKPeripheralAvailabilityManager_iOS *peripheralAvailabilityManager;
@property unsigned long long pasteCascadingMultiplier;
@property long long lastPasteboardChangeCount;
@property unsigned long long creationCascadingMultiplier;
@property (weak) AKPageController *lastCreationCascadingPageController;
@property (nonatomic) BOOL hideAllAdornments;
@property (nonatomic) BOOL isUsedOnDarkBackground;
@property (readonly, nonatomic) NSArray *cachedKeyCommands;
@property double akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
@property double screenPixelsToCanvasPixelsDownscale;
@property (nonatomic) BOOL isLogging;
@property (nonatomic) BOOL selectNewlyCreatedAnnotations;
@property (nonatomic) BOOL shapeDetectionEnabled;
@property (weak, nonatomic) AKToolbarView *modernToolbarView;
@property (weak, nonatomic) id<AKControllerOverlayInteractionProtocol> overlayInteractionDelegate;
@property (nonatomic) BOOL useHighVisibilityDefaultInks;
@property (readonly, nonatomic) BOOL onlyDrawWithApplePencil;
@property (readonly) BOOL _isInDFRAction;
@property (readonly, nonatomic) PKToolPicker *toolPicker;
@property (retain, nonatomic) AKSignaturesController *signaturesController;
@property (nonatomic) BOOL overlayShouldPixelate;
@property (nonatomic) BOOL allEditingDisabled;
@property (nonatomic) BOOL annotationEditingEnabled;
@property (nonatomic) BOOL formFillingEnabled;
@property (nonatomic) BOOL pencilAlwaysDraws;
@property unsigned long long currentPageIndex;
@property (weak, nonatomic) id<PKRulerHostingDelegate> rulerHostingDelegate;
@property (copy) NSString *author;
@property (readonly, copy, nonatomic) NSString *modifiedImageDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)controllerWithDelegate:(id)a0;
+ (void)renderAnnotation:(id)a0 inContext:(struct CGContext { } *)a1;
+ (BOOL)_isInLowMemoryEnvironment;
+ (void)adjustAnnotationBoundsToFitText:(id)a0;
+ (BOOL)canConnectToStylus;
+ (id)markupBarButtonItemWithTarget:(id)a0 action:(SEL)a1;
+ (id)akBundle;
+ (id)akBundleIdentifier;
+ (id)colorForHighlightAttributeWithTag:(long long)a0;
+ (BOOL)hasPressureCapableHardware;

- (void)selectAll:(id)a0;
- (void)undo:(id)a0;
- (id)initForTesting;
- (void)_didReceiveMemoryWarning:(id)a0;
- (void)cut:(id)a0;
- (void)redo:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (id)pressGestureRecognizer;
- (void)paste:(id)a0;
- (id)tapGestureRecognizer;
- (id)panGestureRecognizer;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)teardown;
- (id)doubleTapGestureRecognizer;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (id)rotationGestureRecognizer;
- (void)delete:(id)a0;
- (void)duplicate:(id)a0;
- (void)commitEditing;
- (void)clearUndoStack;
- (id)toolbarButtonItemOfType:(unsigned long long)a0;
- (void)toolPickerVisibilityDidChange:(id)a0;
- (BOOL)supportsImageDescriptionEditing;
- (long long)currentExifOrientationForPageAtIndex:(unsigned long long)a0;
- (double)currentModelBaseScaleFactorForPageAtIndex:(unsigned long long)a0;
- (void)editTextAnnotation:(id)a0 selectAllText:(BOOL)a1;
- (void)endEditingTextAnnotation;
- (BOOL)isOverlayViewLoadedAtIndex:(unsigned long long)a0;
- (id)overlayViewAtIndex:(unsigned long long)a0;
- (void)performActionForSender:(id)a0;
- (void)prepareOverlayAtIndex:(unsigned long long)a0;
- (void)relinquishOverlayAtIndex:(unsigned long long)a0;
- (void)renderAnnotation:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)resetToDefaultToolMode;
- (BOOL)supportsFormFill;
- (BOOL)validateRedo:(id)a0;
- (BOOL)validateUndo:(id)a0;
- (BOOL)validateSender:(id)a0;
- (BOOL)validateDelete:(id)a0;
- (BOOL)validateShowAttributeInspector:(id)a0;
- (void)beginLogging:(id)a0 documentType:(id)a1;
- (void)editTextAnnotation:(id)a0;
- (void)endLogging;
- (void)showAttributeInspector:(id)a0;
- (unsigned long long)toolMode;
- (void)updateOverlayViewAtIndex:(unsigned long long)a0;
- (BOOL)validateDuplicate:(id)a0;
- (BOOL)validateEditTextAnnotation:(id)a0;
- (void)addPopupToAnnotation:(id)a0 openPopup:(BOOL)a1;
- (BOOL)shouldDrawVariableStrokeDoodles;
- (void)_didScrollPDFPage:(id)a0;
- (void)_pageModelControllerSelectedAnnotationsChangedNotification:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popoverAnchorFrameInModelForAnnotations:(id)a0;
- (void)_setupPageModelController:(id)a0;
- (id)_toolpicker_color;
- (id)_toolpicker_inkIdentifier;
- (void)_toolpicker_setColor:(id)a0;
- (void)_toolpicker_setInkIdentifier:(id)a0;
- (void)_updateGestureDependencyPriority;
- (BOOL)_validateCutCopyDelete;
- (void)applyCurrentCrop;
- (BOOL)canBeginEditingTextAnnotation:(id)a0;
- (BOOL)canPerformKeyCommandAction:(SEL)a0 withSender:(id)a1 handled:(BOOL *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentAlignedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onPageAtIndex:(unsigned long long)a1;
- (id)currentPageController;
- (void)delayedUndoControllerSetup;
- (void)didBeginEditingAnnotation:(id)a0;
- (void)didEndEditingAnnotation:(id)a0;
- (void)enclosingScrollViewDidScroll:(id)a0;
- (void)hideSelectionMenu:(id)a0;
- (void)highlightableSelectionChanged;
- (void)highlightableSelectionDidEndChanging;
- (void)highlightableSelectionWillBeginChanging;
- (id)imageForToolbarButtonItemOfType:(unsigned long long)a0;
- (BOOL)isPresentingPopover;
- (id)keyCommandsForAnnotations;
- (id)originalOrModifiedImageDescription;
- (id)pageControllerForAnnotation:(id)a0;
- (id)pageControllerForPageModelController:(id)a0;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)removeNoteFromAnnotation:(id)a0;
- (void)setModifiedImageDescription:(id)a0;
- (void)setToolMode:(unsigned long long)a0;
- (void)showSelectionMenu:(id)a0;
- (void)strokeAddedNotification:(id)a0;
- (BOOL)supportForPencilAlwaysDrawsSatisfied;
- (BOOL)validateCopy:(id)a0;
- (BOOL)validateCut:(id)a0;
- (BOOL)validatePaste:(id)a0;
- (BOOL)validateSelectAll:(id)a0;

@end
