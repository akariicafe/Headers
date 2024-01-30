@interface TSTTableDataCustomFormat : TSTTableDataObject

+ (id)objectWithCustomFormat:(id)a0 refCount:(unsigned int)a1;

- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)customFormat;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)estimateByteSize;
- (id)initObjectWithCustomFormat:(id)a0 refCount:(unsigned int)a1;

@end
