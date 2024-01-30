@class NSString, TSWPParagraphStyle, TSWPListStyle;

@interface TSWPTextStylePreset : TSPObject <TSSPreset, TSKModel>

@property (copy, nonatomic) NSString *presetIdentifier;
@property (retain, nonatomic) TSWPParagraphStyle *paragraphStyle;
@property (retain, nonatomic) TSWPListStyle *listStyle;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)referencedStyles;
- (void)loadFromArchive:(const struct TextStylePresetArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; struct Reference *x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct TextStylePresetArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; struct Reference *x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 presetIdentifier:(id)a1 paragraphStyle:(id)a2 listStyle:(id)a3;

@end
