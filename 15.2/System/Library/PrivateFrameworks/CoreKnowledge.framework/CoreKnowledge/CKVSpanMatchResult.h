@class NSSet, CKVItemInfo;

@interface CKVSpanMatchResult : NSObject <NSCopying>

@property (readonly, nonatomic) CKVItemInfo *itemInfo;
@property (readonly, nonatomic) NSSet *spanMatches;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithItemInfo:(id)a0 spanMatches:(id)a1;
- (BOOL)isEqualToSpanMatchResult:(id)a0;

@end
