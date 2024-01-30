@class TSDInfoGeometry, TSDDrawableInfo, TSDGroupInfo, TSPObject, NSString, NSObject, NSArray;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSDCounterRotateInfo : NSObject <TSDResizingAwareInfo, TSDContainerInfo>

@property (readonly, weak, nonatomic) TSDDrawableInfo *childInfo;
@property (readonly, weak, nonatomic) TSDGroupInfo *parentGroup;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } counterTransform;
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
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;

+ (id)infoGeometryForTransformInRoot:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 isChildFlipped:(BOOL)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })counterTransformForTransformInRoot:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)p_infoGeometryForCounterTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 isChildFlipped:(BOOL)a1;
+ (id)infoGeometryInRootIncludingCounterRotateIfNeededForDrawable:(id)a0;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (void)setPrimitiveGeometry:(id)a0;
- (id)infoForSelectionPath:(id)a0;
- (id)initWithChildInfo:(id)a0 parentGroup:(id)a1 counterTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

@end
