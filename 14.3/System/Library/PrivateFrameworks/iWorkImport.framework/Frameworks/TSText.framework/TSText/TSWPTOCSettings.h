@class NSString, TSURetainedPointerKeyDictionary, NSSet;

@interface TSWPTOCSettings : TSPObject <TSPCopying, TSSPreset, TSSStyleClient>

@property (retain, nonatomic) TSURetainedPointerKeyDictionary *map;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) int scope;
@property (readonly, nonatomic) NSSet *indexedStyles;
@property (readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)loadFromArchive:(const struct TOCSettingsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSWP::TOCSettingsArchive_TOCEntryData> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; unsigned int x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct TOCSettingsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSWP::TOCSettingsArchive_TOCEntryData> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; unsigned int x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)addIndexedStyle:(id)a0 withEntryStyle:(id)a1;
- (id)entryStyleForParagraphStyle:(id)a0;
- (id)copyUsingDeepCopy;
- (BOOL)showInTOCForParagraphStyle:(id)a0;
- (void)addIndexedStyle:(id)a0 withEntryStyle:(id)a1 showInTOC:(BOOL)a2;
- (void)p_upgradeStyle:(id)a0 withStylesheet:(id)a1;
- (void)removeIndexedStyle:(id)a0;
- (void)upgradeWithStylesheet:(id)a0;

@end
