@class PAAccess;

@interface PAAccessMatcher : NSObject <NSCopying>

@property (readonly, nonatomic) PAAccess *access;
@property (readonly, nonatomic) unsigned long long options;

+ (id)coalescingMatcherForAccess:(id)a0;
+ (id)negativeAccessCacheMatcherForAccess:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAccess:(id)a0 options:(unsigned long long)a1;

@end
