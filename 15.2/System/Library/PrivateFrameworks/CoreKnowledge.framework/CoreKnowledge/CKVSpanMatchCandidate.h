@class CKVItemInfo, CKVSpanMatch;

@interface CKVSpanMatchCandidate : NSObject <NSCopying>

@property (readonly, nonatomic) CKVSpanMatch *spanMatch;
@property (readonly, nonatomic) CKVItemInfo *itemInfo;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSpanMatch:(id)a0 itemInfo:(id)a1;
- (BOOL)isEqualToSpanMatchCandidate:(id)a0;

@end
