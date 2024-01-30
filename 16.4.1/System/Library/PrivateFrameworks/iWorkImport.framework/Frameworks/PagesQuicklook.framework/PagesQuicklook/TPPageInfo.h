@class NSString, NSArray, TSDInfoGeometry, TPBodyInfo, NSObject, TSPObject, TPPageController, TPDocumentRoot;
@protocol TSDInfo, TSDOwningAttachment;

@interface TPPageInfo : NSObject <TSDContainerInfo>

@property (class, readonly, nonatomic) unsigned long long documentSetupPageIndex;
@property (class, readonly, nonatomic) unsigned long long documentSetupRightSidePageIndex;
@property (class, readonly, nonatomic) unsigned long long documentSetupLeftSidePageIndex;

@property (readonly, weak, nonatomic) TPPageController *pageController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pageFrame;
@property (readonly, nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) TPBodyInfo *bodyInfo;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot;
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

+ (unsigned long long)pageIndexFromPageTemplateIndex:(unsigned long long)a0;
+ (Class)bodyInfoClass;
+ (BOOL)hasBodyInfo;
+ (BOOL)isAlternativePageIndex:(unsigned long long)a0 documentRoot:(id)a1;
+ (BOOL)isDocSetupPageIndex:(unsigned long long)a0;
+ (BOOL)isPageTemplatePageIndex:(unsigned long long)a0 documentRoot:(id)a1;
+ (unsigned long long)pageTemplateIndexFromPageIndex:(unsigned long long)a0 documentRoot:(id)a1;

- (BOOL)isSelectable;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (Class)layoutClass;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (Class)repClass;
- (id)infoForSelectionPath:(id)a0;
- (void)setPrimitiveGeometry:(id)a0;
- (id)initWithPageIndex:(unsigned long long)a0 documentRoot:(id)a1;

@end
