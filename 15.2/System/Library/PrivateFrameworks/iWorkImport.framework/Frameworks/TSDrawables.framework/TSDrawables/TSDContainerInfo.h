@class TSDInfoGeometry, NSArray, TSPObject, NSString, TSSPropertySetChangeDetails, NSObject, NSMutableArray;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDContainerInfo : TSPObject <TSDMutableContainerInfo, TSKDocumentObject, TSDModelContainer, TSDChangeableInfo> {
    NSMutableArray *_childInfos;
    TSSPropertySetChangeDetails *_changes;
}

@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
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
@property (readonly, nonatomic) NSArray *containedModels;

- (BOOL)isSelectable;
- (void).cxx_destruct;
- (void)dealloc;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (void)setChildInfos:(id)a0;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (void)willChangeProperty:(int)a0;
- (void)willChangeProperties:(id)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)addChildInfo:(id)a0;
- (void)insertChildInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertChildInfo:(id)a0 below:(id)a1;
- (void)insertChildInfo:(id)a0 above:(id)a1;
- (void)moveChildren:(id)a0 toIndexes:(id)a1;
- (void)removeChildInfo:(id)a0;
- (void)replaceChildInfo:(id)a0 with:(id)a1;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)setPrimitiveGeometry:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)insertContainedModel:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeContainedModel:(id)a0;
- (void)moveModel:(id)a0 toIndex:(unsigned long long)a1;
- (id)infoForSelectionPath:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end
