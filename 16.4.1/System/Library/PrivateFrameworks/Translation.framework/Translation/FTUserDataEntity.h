@class NSArray, NSMutableDictionary, NSData;

@interface FTUserDataEntity : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct UserDataEntity { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *attributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::UserDataEntity> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct UserDataEntity { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct UserDataEntity { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)attributes_count;
- (void)attributes_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)attributes_objectAtIndex:(unsigned long long)a0;

@end
