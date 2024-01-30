@class TSDInfoGeometry, TSPObject, SXTextTangierStorage, NSString, NSObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface SXStandaloneTextInfo : NSObject <TSDContainerInfo>

@property (readonly, nonatomic) SXTextTangierStorage *storage;
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

- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (Class)repClass;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (id)childInfos;
- (BOOL)anchoredToText;
- (BOOL)attachedToBodyText;
- (BOOL)floatingAboveText;
- (BOOL)inlineWithText;

@end
