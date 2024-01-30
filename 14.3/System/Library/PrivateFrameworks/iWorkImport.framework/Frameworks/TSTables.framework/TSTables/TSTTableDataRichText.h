@interface TSTTableDataRichText : TSTTableDataObject

+ (id)objectWithRichTextPayload:(id)a0 refCount:(unsigned int)a1;

- (id)description;
- (void)encodeToArchive:(struct TableDataList_ListEntry { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; struct FormulaArchive *x6; struct FormatStructArchive *x7; struct CustomFormatArchive *x8; struct Reference *x9; struct Reference *x10; struct ImportWarningSetArchive *x11; struct CellSpecArchive *x12; unsigned int x13; unsigned int x14; } *)a0 archiver:(id)a1;
- (id)initObjectWithRichTextPayload:(id)a0 refCount:(unsigned int)a1;
- (id)richTextStorage;
- (void)loadFromArchive:(const struct TableDataList_ListEntry { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; struct FormulaArchive *x6; struct FormatStructArchive *x7; struct CustomFormatArchive *x8; struct Reference *x9; struct Reference *x10; struct ImportWarningSetArchive *x11; struct CellSpecArchive *x12; unsigned int x13; unsigned int x14; } *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)estimateByteSize;
- (id)richTextPayload;

@end
