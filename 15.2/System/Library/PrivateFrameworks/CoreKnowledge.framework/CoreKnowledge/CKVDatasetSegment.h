@class NSArray, NSMutableDictionary, NSData;

@interface CKVDatasetSegment : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct DatasetSegment { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) unsigned int datasetId;
@property (readonly, nonatomic) unsigned int segmentId;
@property (readonly, nonatomic) unsigned int fromIndex;
@property (readonly, nonatomic) unsigned int toIndex;
@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct DatasetSegment { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<Siri::Vocabulary::DatasetSegment> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct DatasetSegment { unsigned char x0[1]; } *)a1;
- (void)items_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)items_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)items_count;

@end
