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
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })_cellRange;
- (id)initWithContext:(id)a0 tableInfo:(id)a1 pencilAnnotationStorage:(id)a2;
- (id)initWithTableInfo:(id)a0 pencilAnnotationStorage:(id)a1;

@end
