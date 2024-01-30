@class NSString, NSMutableDictionary, NSData;

@interface CKVDatasetInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct DatasetInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) unsigned int datasetId;
@property (readonly, nonatomic) unsigned long long lastModifiedTime;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned long long capturedTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct DatasetInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<Siri::Vocabulary::DatasetInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct DatasetInfo { unsigned char x0[1]; } *)a1;

@end
