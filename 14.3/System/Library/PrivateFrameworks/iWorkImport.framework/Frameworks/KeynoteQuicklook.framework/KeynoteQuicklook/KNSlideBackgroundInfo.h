@class KNAbstractSlide, TSDInfoGeometry, TSPObject, NSString, TSSPropertySetChangeDetails, TSDFill, NSObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface KNSlideBackgroundInfo : NSObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject> {
    TSSPropertySetChangeDetails *_changes;
}

@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic) TSDFill *fill;
@property (readonly, weak, nonatomic) KNAbstractSlide *slide;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;

+ (id)backgroundWithSlide:(id)a0 andGeometry:(id)a1;

- (struct CGSize { double x0; double x1; })minimumSize;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (void)willChangeProperty:(int)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 context:(id)a1 transformedObjects:(id)a2 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)setPrimitiveGeometry:(id)a0;
- (id)initWithSlide:(id)a0 andGeometry:(id)a1;
- (id)originalPDFDataForCopy;

@end
