@class NSString;

@interface TSWPTextualAttachment : TSWPAttachment

@property (readonly, nonatomic) NSString *stringEquivalent;

+ (Class)classForUnarchiver:(id)a0;

- (BOOL)shouldArchiveStringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)a0 pageCount:(unsigned long long)a1 charIndex:(unsigned long long)a2;
- (void)setStringEquivalent:(id)a0;
- (id)stringEquivalentWithLayoutParent:(id)a0;
- (void)loadFromArchive:(const struct TextualAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; int x5; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct TextualAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; int x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)stringEquivalentWithNumberProvider:(id)a0;

@end
