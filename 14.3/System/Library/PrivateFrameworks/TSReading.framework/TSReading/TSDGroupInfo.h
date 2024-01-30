@class TSDInfoGeometry, TSPObject, NSString, NSObject, NSMutableArray;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor> {
    NSMutableArray *mChildInfos;
    BOOL mIsInDocument;
}

@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;

+ (id)groupGeometryFromChildrenInfos:(id)a0;
+ (id)p_drawablesToInsertForGroup:(id)a0 filteredWithTarget:(id)a1 action:(SEL)a2 didUngroup:(BOOL *)a3;
+ (id)drawablesToInsertForGroup:(id)a0 filteredWithTarget:(id)a1 action:(SEL)a2;

- (void)didCopy;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (id)childEnumerator;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (id)childInfos;
- (void)setChildInfos:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willCopyWithOtherDrawables:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)aspectRatioLocked;
- (void)addChildInfo:(id)a0;
- (void)insertChildInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertChildInfo:(id)a0 below:(id)a1;
- (void)insertChildInfo:(id)a0 above:(id)a1;
- (void)moveChildren:(id)a0 toIndexes:(id)a1;
- (void)removeChildInfo:(id)a0;
- (void)replaceChildInfo:(id)a0 with:(id)a1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)allNestedChildrenInfos;
- (id)allNestedChildrenInfosIncludingGroups;
- (id)groupedGeometryForChildInfo:(id)a0;
- (void)removeAllChildrenInDocument:(BOOL)a0;
- (void)processSelectedStoragesWithStatisticsController:(id)a0;
- (id)onlyChild;
- (id)ungroupedGeometryForChildInfo:(id)a0;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (void)ensureGeometryFitsChildren;

@end
