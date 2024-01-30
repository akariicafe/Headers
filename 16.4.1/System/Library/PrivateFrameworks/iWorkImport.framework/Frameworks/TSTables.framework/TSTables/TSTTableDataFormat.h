@interface TSTTableDataFormat : TSTTableDataObject

+ (id)objectWithFormat:(id)a0 refCount:(unsigned int)a1;

- (id)format;
- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (unsigned long long)estimateByteSize;
- (id)initObjectWithFormat:(id)a0 refCount:(unsigned int)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;
- (void)p_setUpFormat:(id)a0;

@end
