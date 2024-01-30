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

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (id)copyWithContext:(id)a0;
- (BOOL)allowsEditing;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (BOOL)allowsPasteAsSmartField;
- (BOOL)canCopy:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)loadFromArchive:(const struct SmartFieldArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct SmartFieldArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; } *)a0 archiver:(id)a1;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (BOOL)isEquivalentToObject:(id)a0;
- (void)resetTextAttributeUUIDString;
- (void)i_setTextAttributeUUIDString:(id)a0;
- (id)initFromSmartField:(id)a0;

@end
