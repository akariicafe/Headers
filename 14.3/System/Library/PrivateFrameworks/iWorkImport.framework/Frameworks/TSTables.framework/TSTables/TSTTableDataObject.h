@class TSDCommentStorage, NSString, TSTCellSpec, TSSStyle, TSUCustomFormat, TSTConditionalStyleSet, NSObject, TSWPStorage, TSTImportWarningSet, TSTPopUpMenuModel, TSKFormat;
@protocol TSTTableDataPayloadHashing;

@interface TSTTableDataObject : NSObject <TSPCopying>

@property (readonly, nonatomic) unsigned int refCount;
@property (readonly, nonatomic) unsigned long long byteSizeForArchiving;
@property (nonatomic) unsigned int key;
@property (retain, nonatomic) NSObject<TSTTableDataPayloadHashing> *payload;
@property (readonly, nonatomic) TSDCommentStorage *commentStorage;
@property (readonly, nonatomic) TSTConditionalStyleSet *conditionalStyleSet;
@property (readonly, nonatomic) TSUCustomFormat *customFormat;
@property (readonly, nonatomic) TSKFormat *format;
@property (readonly, nonatomic) TSTCellSpec *cellSpec;
@property (readonly, nonatomic) TSWPStorage *formulaError;
@property (readonly, nonatomic) TSTImportWarningSet *importWarningSet;
@property (readonly, nonatomic) TSTPopUpMenuModel *popUpMenuModel;
@property (readonly, nonatomic) TSWPStorage *richTextStorage;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) TSSStyle *style;

+ (void)loadObjectFromArchive:(const struct TableDataList_ListEntry { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; struct FormulaArchive *x6; struct FormatStructArchive *x7; struct CustomFormatArchive *x8; struct Reference *x9; struct Reference *x10; struct ImportWarningSetArchive *x11; struct CellSpecArchive *x12; unsigned int x13; unsigned int x14; } *)a0 listType:(int)a1 unarchiver:(id)a2 completion:(id /* block */)a3;
+ (id)objectWithRefCount:(unsigned int)a0;

- (void).cxx_destruct;
- (id)style;
- (id)string;
- (id)copyWithContext:(id)a0;
- (unsigned long long)hash;
- (id)format;
- (BOOL)isEqual:(id)a0;
- (void)encodeToArchive:(struct TableDataList_ListEntry { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; struct FormulaArchive *x6; struct FormatStructArchive *x7; struct CustomFormatArchive *x8; struct Reference *x9; struct Reference *x10; struct ImportWarningSetArchive *x11; struct CellSpecArchive *x12; unsigned int x13; unsigned int x14; } *)a0 archiver:(id)a1;
- (id)cellSpec;
- (id)customFormat;
- (id)commentStorage;
- (void)takeReference;
- (void)takeReferences:(unsigned int)a0;
- (id)richTextStorage;
- (id)conditionalStyleSet;
- (BOOL)dropReferences:(unsigned int)a0;
- (id)formulaError;
- (id)importWarningSet;
- (id)popUpMenuModel;
- (id)initWithRefCount:(unsigned int)a0;
- (void)loadFromArchive:(const struct TableDataList_ListEntry { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; struct FormulaArchive *x6; struct FormatStructArchive *x7; struct CustomFormatArchive *x8; struct Reference *x9; struct Reference *x10; struct ImportWarningSetArchive *x11; struct CellSpecArchive *x12; unsigned int x13; unsigned int x14; } *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;
- (void)p_sharedInitWithRefCount:(unsigned int)a0 key:(unsigned int)a1;
- (unsigned long long)estimateByteSize;
- (void)sharedLoadFromArchive:(const struct TableDataList_ListEntry { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; struct FormulaArchive *x6; struct FormatStructArchive *x7; struct CustomFormatArchive *x8; struct Reference *x9; struct Reference *x10; struct ImportWarningSetArchive *x11; struct CellSpecArchive *x12; unsigned int x13; unsigned int x14; } *)a0;
- (BOOL)dropReference;
- (void)addReferencesFromObject:(id)a0;

@end
