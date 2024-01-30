@class TSTTableInfo, TSDPencilAnnotationStorage, NSString;

@interface TSTPencilAnnotation : TSPObject <TSKPencilAnnotation>

@property (weak, nonatomic) TSTTableInfo *table;
@property (readonly, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needsObjectUUID;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)loadFromArchive:(const struct PencilAnnotationArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct PencilAnnotationArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithTableInfo:(id)a0 pencilAnnotationStorage:(id)a1;
- (id)initWithContext:(id)a0 tableInfo:(id)a1 pencilAnnotationStorage:(id)a2;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })_cellRange;

@end
