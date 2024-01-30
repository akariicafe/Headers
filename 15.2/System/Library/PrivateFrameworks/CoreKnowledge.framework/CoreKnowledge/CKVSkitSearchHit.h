@class NSSet, CKVItemInfo;

@interface CKVSkitSearchHit : NSObject <NSCopying>

@property (readonly, nonatomic) CKVItemInfo *itemInfo;
@property (readonly, nonatomic) NSSet *fields;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) long long docId;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) unsigned long long matchCount;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithItemInfo:(id)a0 fields:(id)a1 rank:(long long)a2 docId:(long long)a3 score:(float)a4 matchCount:(unsigned long long)a5;
- (BOOL)isEqualToSearchHit:(id)a0;

@end
