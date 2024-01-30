@class AKController, AKGeometryHelper, UIView, AKPageModelController, NSString, NSMutableDictionary, AKInkPageOverlayController, AKLayerPresentationManager, AKHighlightColorEditorController;
@protocol AKControllerDelegateProtocol;

@interface AKPageController : NSObject <AKNoteEditorControllerDelegate, AKHighlightColorEditorControllerDelegate, AKNoteEditorControllerDelegate>

@property (weak) AKController *controller;
@property (retain) AKPageModelController *pageModelController;
@property (retain, nonatomic) AKGeometryHelper *geometryHelper;
@property BOOL superviewDependentThingsWereSetUp;
@property (retain, nonatomic) AKLayerPresentationManager *layerPresentationManager;
@property (retain, nonatomic) AKInkPageOverlayController *inkPageOverlayController;
@property (retain, nonatomic) id inkOverlayDrawingUndoTarget;
@property (retain, nonatomic) UIView *overlayView;
@property (retain) NSMutableDictionary *noteEditors;
@property unsigned long long pageIndex;
@property BOOL shouldPixelate;
@property (readonly, nonatomic) AKHighlightColorEditorController *highlightColorEditorController;
@property (readonly) id<AKControllerDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageControllerWithController:(id)a0 andPageModelController:(id)a1;

- (id)initForTesting;
- (void)teardown;
- (void).cxx_destruct;
- (double)modelBaseScaleFactor;
- (long long)currentModelToScreenExifOrientation;
- (double)currentModelToScreenScaleFactor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPageRect;
- (struct CGPoint { double x0; double x1; })convertPointFromOverlayToModel:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromOverlayToModel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)relinquishablesAreLoaded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stickyViewFrameForNoteEditor:(id)a0;
- (id)stickyContainerForNoteEditor:(id)a0;
- (unsigned long long)edgeForNoteEditor:(id)a0;
- (id)popoverPresentingViewControllerForNoteEditor:(id)a0;
- (void)noteEditorWillDismissFromFullScreen:(id)a0;
- (void)noteEditorDidBeginEditing:(id)a0;
- (void)noteEditorDidFinishEditing:(id)a0;
- (void)noteEditorWillPresentFullScreen:(id)a0;
- (void)updateOverlayViewLayers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromModelToOverlay:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)openPopoverForHighlightAnnotation:(id)a0;
- (void)unregisterFromUndoManager:(id)a0;
- (void)setupRelinquishables;
- (void)releaseRelinquishables;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectOfOverlay;
- (void)addPopupToAnnotation:(id)a0 openPopup:(BOOL)a1;
- (void)removeNoteFromAnnotation:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPointFromModelToOverlay:(struct CGPoint { double x0; double x1; })a0;
- (id)newContentSnapshotPDFDataAtScale:(double)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forLoupeAnnotation:(id)a2;
- (id)annotationsBeneathLoupe:(id)a0;
- (BOOL)editorController:(id)a0 isRightArrowEnabledForAnnotation:(id)a1;
- (void)editorController:(id)a0 setTheme:(id)a1 forAnnotation:(id)a2;
- (void)editorController:(id)a0 deleteAnnotation:(id)a1;
- (void)editorController:(id)a0 editNote:(id)a1;
- (void)editorController:(id)a0 showEditMenuForAnnotation:(id)a1;
- (id)_initWithController:(id)a0 andPageModelController:(id)a1;
- (void)updateScaleFactor:(double)a0 isLiveUpdate:(BOOL)a1 forceUpdate:(BOOL)a2;
- (id)_popoverPresentingViewController;
- (void)openPopupAnnotation:(id)a0;
- (BOOL)handleEditAnnotation:(id)a0;
- (void)overlayWasAddedToSuperview;

@end
