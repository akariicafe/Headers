@class KVItem, NSUUID, CKVOriginApp, CKVSearchField;

@interface CKVFTSResult : NSObject <NSCopying>

@property (readonly, nonatomic) KVItem *item;
@property (readonly, nonatomic) CKVOriginApp *originApp;
@property (readonly, nonatomic) CKVSearchField *searchField;
@property (readonly, nonatomic) NSUUID *recordId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 originApp:(id)a1 searchField:(id)a2 recordId:(id)a3;
- (BOOL)isEqualToFTSResult:(id)a0;

@end
