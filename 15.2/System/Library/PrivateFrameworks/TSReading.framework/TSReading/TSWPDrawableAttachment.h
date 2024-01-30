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
- (int)elementKind;
- (BOOL)isAnchored;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (BOOL)isSearchable;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 drawable:(id)a1;
- (BOOL)isHTMLWrap;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (unsigned long long)enabledKnobMask;
- (BOOL)specifiesEnabledKnobMask;
- (void)setParentStorage:(id)a0;
- (id)detachDrawable;
- (void)attachDrawable:(id)a0;
- (BOOL)isPartitioned;
- (Class)positionerClass;
- (void)infoChanged;
- (id)textStorages;
- (id)textRepresentationForCopy;

@end
