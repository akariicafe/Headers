@class TSWPParagraphStyle, TSTCellStyle;

@interface TSTTableHeaderInfo : NSObject

@property (retain, nonatomic) TSTCellStyle *cellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *textStyle;
@property (nonatomic) double size;
@property (nonatomic) unsigned char hidingState;
@property (nonatomic) unsigned int numberOfCells;
@property (readonly, nonatomic) BOOL hasContent;

- (void).cxx_destruct;
- (id)description;
- (void)updateFromMetadata:(id)a0;
- (id)initFromArchive:(const struct HeaderStorageBucket_Header { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; unsigned int x6; float x7; unsigned int x8; unsigned int x9; } *)a0 unarchiver:(id)a1 outIndex:(unsigned int *)a2;
- (void)encodeToArchive:(struct HeaderStorageBucket_Header { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; unsigned int x6; float x7; unsigned int x8; unsigned int x9; } *)a0 archiver:(id)a1 index:(unsigned int)a2;

@end
