@class NSMutableSet, AKStatistics, NSArray, AKCropAnnotation, AKInkAnnotation, NSSet, NSMutableOrderedSet;

@interface AKPageModelController : NSObject {
    NSMutableOrderedSet *_mutableAnnotations;
    NSMutableSet *_mutableSelectedAnnotations;
}

@property (retain) AKCropAnnotation *cropAnnotation;
@property (retain) AKInkAnnotation *inkCanvasAnnotation;
@property (weak, nonatomic) AKStatistics *statisticsLogger;
@property (weak) id representedObject;
@property (readonly) NSArray *annotations;
@property (readonly) NSSet *selectedAnnotations;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } appliedCropRect;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsAnnotation:(id)a0;
- (void)setSelectedAnnotations:(id)a0;
- (void)selectAnnotation:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)selectAnnotationsAtIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)removeAllAnnotations;
- (void)setInkCanvasAnnotationOneTime:(id)a0;
- (id)selectionStateForUndo;
- (void)restoreSelectionStateForUndo:(id)a0;
- (void)removeCropToolAnnotation;
- (BOOL)hasMaskBorderAnnotation;
- (void)selectAllAnnotations;
- (id)archivableRepresentation;
- (id)initWithArchivableRepresentation:(id)a0;
- (void)insertObject:(id)a0 inAnnotationsAtIndex:(unsigned long long)a1;
- (void)replaceObjectInAnnotationsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectFromAnnotationsAtIndex:(unsigned long long)a0;
- (void)_ensureInkAnnotationIsInFrontWhenEditsAreDone;
- (void)_enableEditObservationForAnnotationIfNew:(id)a0;
- (void)_logAnnotationAdded:(id)a0;
- (void)removeAnnotationsAtIndexes:(id)a0;
- (void)removeSelectedAnnotationsObject:(id)a0;
- (void)removeSelectedAnnotations:(id)a0;
- (void)_postSelectedAnnotationsChangedNotification;
- (void)addSelectedAnnotationsObject:(id)a0;
- (void)addSelectedAnnotations:(id)a0;
- (void)insertAnnotations:(id)a0 atIndexes:(id)a1;
- (void)_coalescedEnsureInkAnnotationIsInFront:(id)a0;
- (void)replaceAnnotationsAtIndexes:(id)a0 withAnnotations:(id)a1;
- (void)intersectSelectedAnnotations:(id)a0;
- (void)bringSelectedAnnotationsForward;
- (void)bringSelectedAnnotationsToFront;
- (void)sendSelectedAnnotationsBackward;
- (void)sendSelectedAnnotationsToBack;
- (void)addCropToolAnnotation;

@end
