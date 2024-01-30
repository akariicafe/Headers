@interface TSTTableDataString : TSTTableDataObject

@property (readonly, nonatomic) BOOL shouldWrap;

+ (id)objectWithString:(id)a0 refCount:(unsigned int)a1;

- (id)string;
- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (unsigned long long)estimateByteSize;
- (id)initObjectWithString:(id)a0 refCount:(unsigned int)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;

@end
