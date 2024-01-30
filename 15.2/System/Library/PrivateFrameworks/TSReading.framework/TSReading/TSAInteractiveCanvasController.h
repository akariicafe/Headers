@class TSDDrawableInfo, TSAAnnotationController;

@interface TSAInteractiveCanvasController : TSWPInteractiveCanvasController

@property (retain, nonatomic) TSDDrawableInfo *infoBeingDragInserted;
@property (readonly, nonatomic) BOOL wantsCanvasReferenceController;
@property (readonly, nonatomic) BOOL supportsAnnotations;
@property (readonly, nonatomic) TSAAnnotationController *annotationController;

- (void)teardown;
- (void)selectAll:(id)a0;
- (void)dealloc;
- (void)asyncProcessChanges:(id)a0 forChangeSource:(id)a1;
- (id)additionalVisibleInfosForCanvas:(id)a0;
- (BOOL)wantsHyperlinkGestureRecognizer;
- (void)loadDocument;
- (void)unloadDocument;
- (void)handleHyperlinkGesture:(id)a0;
- (void)willSetDocumentToMode:(long long)a0 fromMode:(long long)a1 animated:(BOOL)a2;
- (void)didSetDocumentToMode:(long long)a0 fromMode:(long long)a1 animated:(BOOL)a2;
- (BOOL)hasEmptyWPSelection;
- (BOOL)requiresSimilarInfos;
- (BOOL)hasInspectableSelection;
- (id)p_activeTextRep;

@end
