@class AKController, NSString, NSUndoManager, NSMutableSet, NSMapTable;

@interface AKUndoController : NSObject

@property (weak) AKController *controller;
@property (retain) NSUndoManager *undoManager;
@property (retain) NSMutableSet *observedPageModelControllers;
@property (retain) NSMutableSet *observedAnnotations;
@property (retain) NSString *undoGroupPresentablePropertyName;
@property BOOL undoGroupHasChangesToMultipleProperties;
@property (retain) NSMapTable *undoGroupOldPropertiesPerAnnotation;
@property BOOL externalSourceTrackingChanged;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithController:(id)a0;
- (void)observeUndoManagerCheckpoint:(id)a0;
- (void)observeUndoManagerDetectedEdit:(id)a0;
- (void)observePageControllerRequestsDisableRegistration:(id)a0;
- (void)observePageControllerRequestsEnableRegistration:(id)a0;
- (void)_startObservingAnnotations:(id)a0;
- (void)_stopObservingAnnotations:(id)a0;
- (void)_registerUndoForSelectionOnPageModelController:(id)a0;
- (void)_setAnnotationProperties:(id)a0;
- (void)_annotationsWillBeRemoved:(id)a0 onPageController:(id)a1;
- (void)_annotationsWereAdded:(id)a0 onPageController:(id)a1;
- (void)_deleteAnnotationsFromModel:(id)a0;
- (void)_endEditingOfTextIfAnnotationsDeleted:(id)a0;
- (void)_addAnnotationsFromModel:(id)a0;
- (void)_undoActionForSelectionState:(id)a0;
- (void)startObservingPageModelController:(id)a0;
- (void)stopObservingPageModelController:(id)a0;

@end
