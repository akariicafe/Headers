@class NSString, NSArray, NSMutableDictionary, NSData;

@interface CKVItem : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct Item { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSArray *fields;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Item { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<Siri::Vocabulary::Item> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Item { unsigned char x0[1]; } *)a1;

@end
