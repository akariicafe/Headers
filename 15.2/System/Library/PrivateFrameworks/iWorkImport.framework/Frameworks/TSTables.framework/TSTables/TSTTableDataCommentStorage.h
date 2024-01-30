@interface TSTTableDataCommentStorage : TSTTableDataObject

+ (id)objectWithCommentStorage:(id)a0 refCount:(unsigned int)a1;

- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)commentStorage;
- (id)initObjectWithCommentStorage:(id)a0 refCount:(unsigned int)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)estimateByteSize;

@end
