@class NSString, NSArray, TSDInfoGeometry, TPPageHint, NSObject, TSWPStorage, TSPObject, TPPageInfo;
@protocol TSWPOffscreenColumn, TSDOwningAttachment, TSDHint, TSWPTopicNumberHints;

@interface TPBodyInfo : NSObject <TSDContainerInfo, TSKModelRootIndexProvider>

@property (readonly, nonatomic) id<TSWPOffscreenColumn> previousTargetLastColumn;
@property (readonly, nonatomic) id<TSWPOffscreenColumn> nextTargetFirstColumn;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *previousTargetTopicNumbers;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumbers;
@property (readonly, nonatomic) id<TSDHint> nextTargetFirstChildHint;
@property (readonly, nonatomic) TSWPStorage *bodyStorage;
@property (readonly, nonatomic) TSWPStorage *storage;
@property (readonly, nonatomic) TPPageHint *pageHint;
@property (readonly, nonatomic) BOOL laysOutVertically;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) TPPageInfo *parentInfo;
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

- (id)copyWithContext:(id)a0;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (void)setPrimitiveGeometry:(id)a0;
- (id)infoForSelectionPath:(id)a0;
- (long long)modelRootIndex;
- (void)inflateBodyLayout:(id)a0;

@end
