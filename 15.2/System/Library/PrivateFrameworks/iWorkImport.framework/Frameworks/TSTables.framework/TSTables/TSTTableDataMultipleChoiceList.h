@interface TSTTableDataMultipleChoiceList : TSTTableDataObject

+ (id)objectWithPopUpMenuModel:(id)a0 refCount:(unsigned int)a1;

- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initObjectWithPopUpMenuModel:(id)a0 refCount:(unsigned int)a1;
- (id)popUpMenuModel;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)estimateByteSize;

@end
