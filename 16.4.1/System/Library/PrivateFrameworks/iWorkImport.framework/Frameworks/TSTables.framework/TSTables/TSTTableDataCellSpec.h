@interface TSTTableDataCellSpec : TSTTableDataObject

+ (id)objectWithCellSpec:(id)a0 refCount:(unsigned int)a1;

- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)cellSpec;
- (unsigned long long)estimateByteSize;
- (id)initObjectWithCellSpec:(id)a0 refCount:(unsigned int)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;

@end
