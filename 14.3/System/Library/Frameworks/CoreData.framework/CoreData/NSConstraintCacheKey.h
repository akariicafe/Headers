@class NSArray;

@interface NSConstraintCacheKey : NSObject <NSCopying> {
    NSArray *_values;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
