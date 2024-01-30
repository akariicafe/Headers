@class PAAccess;

@interface PAAccessMatcher : NSObject <NSCopying>

@property (readonly, nonatomic) PAAccess *access;
@property (readonly, nonatomic) unsigned long long options;

+ (id)negativeAccessCacheMatcherForAccess:(id)a0;
+ (id)coalescingMatcherForAccess:(id)a0;

- (id)initWithAccess:(id)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
