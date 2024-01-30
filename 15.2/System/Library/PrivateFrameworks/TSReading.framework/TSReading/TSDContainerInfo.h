@class TSDInfoGeometry, TSPObject, NSString, NSObject, NSMutableArray;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDContainerInfo : TSPObject <TSDMutableContainerInfo, TSKDocumentObject> {
    NSMutableArray *mChildInfos;
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

- (void)dealloc;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (id)childInfos;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (void)setChildInfos:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)addChildInfo:(id)a0;
- (void)insertChildInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertChildInfo:(id)a0 below:(id)a1;
- (void)insertChildInfo:(id)a0 above:(id)a1;
- (void)moveChildren:(id)a0 toIndexes:(id)a1;
- (void)removeChildInfo:(id)a0;
- (void)replaceChildInfo:(id)a0 with:(id)a1;

@end
