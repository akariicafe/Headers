@class TSDDrawableInfo, TSAAnnotationController;

@interface TSAInteractiveCanvasController : TSWPInteractiveCanvasController

@property (retain, nonatomic) TSDDrawableInfo *infoBeingDragInserted;
@property (readonly, nonatomic) BOOL wantsCanvasReferenceController;
@property (readonly, nonatomic) BOOL supportsAnnotations;
@property (readonly, nonatomic) TSAAnnotationController *annotationController;

- (void)selectAll:(id)a0;
- (void)dealloc;
- (void)teardown;
- (void)asyncProcessChanges:(id)a0 forChangeSource:(id)a1;
- (id)p_activeTextRep;
- (BOOL)wantsHyperlinkGestureRecognizer;
- (id)additionalVisibleInfosForCanvas:(id)a0;
- (void)didSetDocumentToMode:(long long)a0 fromMode:(long long)a1 animated:(BOOL)a2;
- (void)handleHyperlinkGesture:(id)a0;
- (BOOL)hasEmptyWPSelection;
- (BOOL)hasInspectableSelection;
- (void)loadDocument;
- (BOOL)requiresSimilarInfos;
- (void)unloadDocument;
- (void)willSetDocumentToMode:(long long)a0 fromMode:(long long)a1 animated:(BOOL)a2;

@end
