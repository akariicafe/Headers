@interface TSUDeprecatedNumberFormat : NSObject <TSSPropertyValueArchiving>

+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; } *)a0 unarchiver:(id)a1;

- (id)initWithArchive:(const struct ChartsNumberFormatArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct IndexSet *x10; int x11; unsigned int x12; int x13; int x14; unsigned int x15; unsigned int x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; unsigned int x21; double x22; BOOL x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct Message { void /* function */ **x0; } *)a0 archiver:(id)a1;

@end
