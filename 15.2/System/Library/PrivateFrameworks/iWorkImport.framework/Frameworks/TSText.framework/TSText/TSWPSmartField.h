@class NSString, TSWPStorage;

@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying, TSWPTextSpanningObject> {
    NSString *_textAttributeUUIDString;
    unsigned long long _lastTableIndex;
}

@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (readonly, nonatomic) unsigned long long attributeArrayKind;
@property (readonly, nonatomic) int styleAttributeArrayKind;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *textAttributeUUIDString;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultFieldStyleIdentifier;

- (BOOL)allowsEditing;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (id)copyWithContext:(id)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (BOOL)allowsPasteAsSmartField;
- (BOOL)canCopy:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (BOOL)isEquivalentToObject:(id)a0;
- (void)resetTextAttributeUUIDString;
- (void)i_setTextAttributeUUIDString:(id)a0;
- (id)initFromSmartField:(id)a0;

@end
