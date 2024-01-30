@interface TSTTableDataRichText : TSTTableDataObject

+ (id)objectWithRichTextPayload:(id)a0 refCount:(unsigned int)a1;

- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)richTextStorage;
- (id)richTextPayload;
- (unsigned long long)estimateByteSize;
- (id)initObjectWithRichTextPayload:(id)a0 refCount:(unsigned int)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;

@end
