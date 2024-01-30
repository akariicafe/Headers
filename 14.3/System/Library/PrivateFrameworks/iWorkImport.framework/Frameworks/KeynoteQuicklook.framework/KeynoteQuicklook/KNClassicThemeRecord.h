@class NSString, KNClassicStylesheetRecord, NSArray, NSMutableArray;

@interface KNClassicThemeRecord : TSPObject {
    NSString *_UUID;
    KNClassicStylesheetRecord *_stylesheetRecord;
    NSMutableArray *_masters;
}

@property (copy, nonatomic) NSString *UUID;
@property (retain, nonatomic) KNClassicStylesheetRecord *stylesheetRecord;
@property (readonly, nonatomic) NSArray *masters;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)loadFromArchive:(const struct ClassicThemeRecordArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct Reference *x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ClassicThemeRecordArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct Reference *x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)addMaster:(id)a0;

@end
