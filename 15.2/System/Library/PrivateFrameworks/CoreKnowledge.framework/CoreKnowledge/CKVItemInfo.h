@class NSString, NSUUID, NSArray;

@interface CKVItemInfo : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) NSUUID *recordId;
@property (readonly, nonatomic) NSArray *unindexedFieldBuffers;

+ (id)resultItemInfoFromFTSResult:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithItemId:(id)a0 itemType:(long long)a1 originAppId:(id)a2 recordId:(id)a3;
- (id)initWithItemId:(id)a0 itemType:(long long)a1 originAppId:(id)a2 recordId:(id)a3 unindexedFieldBuffers:(id)a4;
- (id)unindexedFieldsWithType:(long long)a0;
- (BOOL)isEqualToItemInfo:(id)a0;

@end
