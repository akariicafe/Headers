@interface PUIndexPathSet : NSObject <NSCopying, NSMutableCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsIndexPath:(id)a0;
- (void)enumerateIndexPathsUsingBlock:(id /* block */)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)count;

@end
