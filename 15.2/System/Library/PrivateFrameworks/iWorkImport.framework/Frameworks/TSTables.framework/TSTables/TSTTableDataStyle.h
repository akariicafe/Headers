@interface TSTTableDataStyle : TSTTableDataObject

+ (id)objectWithStyle:(id)a0 refCount:(unsigned int)a1;

- (id)style;
- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initObjectWithStyle:(id)a0 refCount:(unsigned int)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)estimateByteSize;

@end
