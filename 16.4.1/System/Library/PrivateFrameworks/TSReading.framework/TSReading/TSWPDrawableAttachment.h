@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment

@property (readonly, retain, nonatomic) TSDDrawableInfo *drawable;
@property (nonatomic) int hOffsetType;
@property (nonatomic) double hOffset;
@property (nonatomic) int vOffsetType;
@property (nonatomic) double vOffset;
@property (readonly, nonatomic) double descent;
@property (nonatomic) int vAlignment;
@property (nonatomic) double attachmentAnchorY;

+ (void)setPositionerClass:(Class)a0;

- (BOOL)isDrawable;
- (BOOL)isSearchable;
- (void)dealloc;
- (int)elementKind;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)invalidate;
- (BOOL)isAnchored;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 drawable:(id)a1;
- (BOOL)isHTMLWrap;
- (void)attachDrawable:(id)a0;
- (unsigned long long)enabledKnobMask;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (Class)positionerClass;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)detachDrawable;
- (void)infoChanged;
- (BOOL)isPartitioned;
- (void)setParentStorage:(id)a0;
- (BOOL)specifiesEnabledKnobMask;
- (id)textRepresentationForCopy;
- (id)textStorages;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;

@end
