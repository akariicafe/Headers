@class NSTimer, NSHashTable, NSArray, MKAnnotationView, NSMutableDictionary, MKQuadTrie, NSMutableSet, NSMapTable;
@protocol MKAnnotationRepresentation, MKAnnotationManagerDelegate, MKAnnotation, MKAnnotationMarkerContainer;

@interface MKAnnotationManager : NSObject {
    NSTimer *_updateVisibleTimer;
    MKQuadTrie *_annotations;
    NSHashTable *_visibleAnnotations;
    NSMutableSet *_pendingAnnotations;
    NSMutableSet *_disallowAnimationAnnotations;
    NSMutableSet *_invalidCoordinateAnnotations;
    id<MKAnnotation> _selectedAnnotation;
    NSMapTable *_annotationsToRepresentations;
    NSMutableSet *_annotationRepresentations;
    NSMapTable *_reusableAnnotationRepresentations;
    NSMutableSet *_pendingRemovalAnnotationRepresentations;
    NSMutableDictionary *_registeredIdentifierToRepresentationClasses;
    NSHashTable *_allClusterAnnotations;
    BOOL _isChangingCoordinate;
    BOOL _isDeferringContainerSelection;
    BOOL _deferredContainerSelectionAnimated;
    MKAnnotationView *_userLocationView;
}

@property (weak, nonatomic) id<MKAnnotationMarkerContainer> container;
@property (weak, nonatomic) id<MKAnnotationManagerDelegate> delegate;
@property (nonatomic) BOOL annotationRepresentationsAreAddedImmediately;
@property (weak, nonatomic) id<MKAnnotation> draggedAnnotation;
@property (readonly, weak, nonatomic) id<MKAnnotationRepresentation> selectedAnnotationRepresentation;
@property (readonly, nonatomic) NSArray *annotationRepresentations;
@property (readonly, nonatomic) NSArray *annotations;

- (void)_removeAnnotation:(id)a0 updateVisible:(BOOL)a1 removeFromContainer:(BOOL)a2;
- (void)_setupUpdateVisibleAnnotationsTimer;
- (void)replaceAnnotation:(id)a0 withAnnotation:(id)a1;
- (id)newInternalAnnotationRepresentationForInternalAnnotation:(id)a0;
- (id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)a0;
- (id)addRepresentationForAnnotation:(id)a0;
- (id)annotationsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)configureDefaultAnnotationRepresentation:(id)a0 forAnnotation:(id)a1;
- (void)registerClass:(Class)a0 forRepresentationReuseIdentifier:(id)a1;
- (void)showAnnotationsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)containsAnnotation:(id)a0;
- (void)_annotationDidChangeState:(id)a0 animated:(BOOL)a1;
- (void)addRepresentationsForAnnotations:(id)a0;
- (void)addAnnotations:(id)a0;
- (void)addAnnotation:(id)a0 allowAnimation:(BOOL)a1;
- (void)_addAnnotation:(id)a0 updateVisible:(BOOL)a1;
- (void)configureAnnotationRepresentation:(id)a0 forAnnotation:(id)a1;
- (id)_addRepresentationForAnnotation:(id)a0;
- (void)dealloc;
- (void)addAnnotation:(id)a0;
- (void)_removeRepresentationForAnnotation:(id)a0 fromCull:(BOOL)a1;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)a0;
- (BOOL)annotationIsInternal:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeAnnotation:(id)a0;
- (id)init;
- (void)selectAnnotation:(id)a0 animated:(BOOL)a1;
- (void)removeAnnotations:(id)a0;
- (void)deselectAnnotation:(id)a0 animated:(BOOL)a1;
- (id)representationForAnnotation:(id)a0;
- (void)updateVisibleAnnotations;
- (void).cxx_destruct;
- (void)removeAnnotation:(id)a0 updateVisible:(BOOL)a1;

@end
