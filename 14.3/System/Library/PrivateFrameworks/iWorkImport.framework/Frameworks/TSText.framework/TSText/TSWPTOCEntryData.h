@class NSString, TSWPStorage, TSWPParagraphStyle, TSWPListStyle;

@interface TSWPTOCEntryData : TSPObject <TSPCopying, TSSStyleClient>

@property (readonly, weak, nonatomic) TSWPStorage *storage;
@property (readonly, nonatomic) unsigned long long paragraphIndex;
@property (readonly, nonatomic) unsigned long long pageNumber;
@property (readonly, copy, nonatomic) NSString *numberFormat;
@property (readonly, nonatomic) NSString *heading;
@property (readonly, nonatomic) TSWPParagraphStyle *indexedStyle;
@property (readonly, nonatomic) TSWPListStyle *indexedListStyle;
@property (readonly, nonatomic) unsigned long long indexedListStart;
@property (readonly, nonatomic) unsigned long long indexedParagraphLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tocEntryDataWithStorage:(id)a0 paragraphIndex:(unsigned long long)a1 pageNumber:(unsigned long long)a2 numberFormat:(id)a3 heading:(id)a4 indexedStyle:(id)a5 indexedListStyle:(id)a6 indexedListStart:(unsigned long long)a7 indexedParagraphLevel:(unsigned long long)a8;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)loadFromArchive:(const struct TOCEntryInstanceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct Reference *x6; struct Reference *x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct TOCEntryInstanceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct Reference *x6; struct Reference *x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithStorage:(id)a0 paragraphIndex:(unsigned long long)a1 pageNumber:(unsigned long long)a2 numberFormat:(id)a3 heading:(id)a4 indexedStyle:(id)a5 indexedListStyle:(id)a6 indexedListStart:(unsigned long long)a7 indexedParagraphLevel:(unsigned long long)a8;

@end
