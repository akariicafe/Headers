@class NSUUID, NSData, CKVItem, CKVOriginApp, CKVSearchField;

@interface CKVFTSResult : NSObject <NSCopying>

@property (readonly, nonatomic) CKVItem *item;
@property (readonly, nonatomic) NSData *itemBuffer;
@property (readonly, nonatomic) CKVOriginApp *originApp;
@property (readonly, nonatomic) CKVSearchField *searchField;
@property (readonly, nonatomic) NSUUID *recordId;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithItem:(id)a0 itemBuffer:(id)a1 originApp:(id)a2 searchField:(id)a3 recordId:(id)a4;
- (BOOL)isEqualToFTSResult:(id)a0;

@end
