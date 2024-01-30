@class NSString;

@interface TSWPPlaceholderSmartField : TSWPSmartField {
    BOOL _localizable;
    NSString *_scriptTag;
}

@property (nonatomic) BOOL isLocalizable;
@property (copy, nonatomic) NSString *scriptTag;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)loadFromArchive:(const struct PlaceholderSmartFieldArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct SmartFieldArchive *x5; BOOL x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct PlaceholderSmartFieldArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct SmartFieldArchive *x5; BOOL x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;

@end
