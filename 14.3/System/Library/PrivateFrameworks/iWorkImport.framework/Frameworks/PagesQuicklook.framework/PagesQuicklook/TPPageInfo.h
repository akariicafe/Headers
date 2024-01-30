@class TSDInfoGeometry, NSArray, TPBodyInfo, TSPObject, TPDocumentRoot, NSObject, NSString;
@protocol TSDInfo, TSDOwningAttachment, TPPageLayoutInfoProvider;

@interface TPPageInfo : NSObject <TSDContainerInfo, TSKModelRootIndexProvider>

@property (class, readonly, nonatomic) unsigned long long documentSetupPageIndex;
@property (class, readonly, nonatomic) unsigned long long documentSetupRightSidePageIndex;
@property (class, readonly, nonatomic) unsigned long long documentSetupLeftSidePageIndex;

@property (readonly, nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) TPBodyInfo *bodyInfo;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot;
@property (readonly, weak, nonatomic) id<TPPageLayoutInfoProvider> layoutInfoProvider;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
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

+ (BOOL)isDocSetupPageIndex:(unsigned long long)a0;
+ (BOOL)isAlternativePageIndex:(unsigned long long)a0 documentRoot:(id)a1;
+ (BOOL)hasBodyInfo;
+ (BOOL)isPageTemplatePageIndex:(unsigned long long)a0 documentRoot:(id)a1;
+ (unsigned long long)pageIndexFromPageTemplateIndex:(unsigned long long)a0;
+ (unsigned long long)pageTemplateIndexFromPageIndex:(unsigned long long)a0 documentRoot:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (void)setPrimitiveGeometry:(id)a0;
- (id)infoForSelectionPath:(id)a0;
- (long long)modelRootIndex;
- (id)initWithPageIndex:(unsigned long long)a0 documentRoot:(id)a1 layoutInfoProvider:(id)a2;

@end
