@class NSString, TSWPStorage;

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying>

@property (nonatomic) TSWPStorage *parentStorage;
@property (readonly, nonatomic) BOOL isDrawable;
@property (readonly, nonatomic) BOOL isAnchored;
@property (readonly, nonatomic) BOOL isPartitioned;
@property (readonly, nonatomic) BOOL isAttachedToBodyText;
@property (readonly, nonatomic) Class positionerClass;
@property (readonly, nonatomic) BOOL isSearchable;
@property (readonly, nonatomic) BOOL specifiesEnabledKnobMask;
@property (readonly, nonatomic) unsigned long long enabledKnobMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned int)attributeArrayKind;

- (id)initWithContext:(id)a0;
- (id)copyWithContext:(id)a0;
- (int)elementKind;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)findCharIndex;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)infoChanged;
- (BOOL)changesWithPageCount;
- (id)topLevelAttachment;
- (BOOL)changesWithPageNumber;

@end
