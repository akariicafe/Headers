@class NSArray;

@interface NSConstraintCacheKey : NSObject <NSCopying> {
    NSArray *_values;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
