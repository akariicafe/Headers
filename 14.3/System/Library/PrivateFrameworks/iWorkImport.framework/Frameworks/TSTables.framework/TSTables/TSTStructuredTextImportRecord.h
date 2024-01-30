@class TSTCellRegion, NSArray, NSURL, NSDate, TSKStructuredTextImportSettings, NSData;

@interface TSTStructuredTextImportRecord : NSObject <NSCopying>

@property (retain, nonatomic) TSKStructuredTextImportSettings *importSettings;
@property (retain, nonatomic) NSURL *importSource;
@property (retain, nonatomic) NSDate *importDate;
@property (copy, nonatomic) NSData *sourceData;
@property (nonatomic) double confidence;
@property (retain, nonatomic) TSTCellRegion *importedRegion;
@property (nonatomic) unsigned long long sourceColumnCount;
@property (nonatomic) unsigned long long sourceRowCount;
@property (retain, nonatomic) NSArray *pasteInverseCommands;
@property (nonatomic) unsigned long long pasteType;
@property (nonatomic) BOOL pasteWasUpdate;
@property (readonly, nonatomic, getter=isWholeTableImport) BOOL wholeTableImport;
@property (readonly, nonatomic, getter=isReimportable) BOOL reimportable;

+ (id)record;
+ (id)recordFromArchive:(const struct StructuredTextImportRecord { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct StructuredTextImportSettings *x6; struct CellRegion *x7; double x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; float x12; } *)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromArchive:(const struct StructuredTextImportRecord { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct StructuredTextImportSettings *x6; struct CellRegion *x7; double x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; float x12; } *)a0;
- (void)encodeToArchive:(struct StructuredTextImportRecord { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct StructuredTextImportSettings *x6; struct CellRegion *x7; double x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; float x12; } *)a0;

@end
