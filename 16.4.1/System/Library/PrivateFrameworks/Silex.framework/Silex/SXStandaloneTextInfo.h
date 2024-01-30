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

- (void)dealloc;
- (id)initWithStorage:(id)a0;
- (Class)layoutClass;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)anchoredToText;
- (BOOL)attachedToBodyText;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)floatingAboveText;
- (BOOL)inlineWithText;
- (BOOL)isThemeContent;
- (Class)repClass;

@end
