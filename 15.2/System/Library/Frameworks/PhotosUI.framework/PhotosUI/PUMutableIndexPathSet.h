@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet {
    NSMutableSet *_indexPaths;
}

- (void)removeAllIndexPaths;
- (void)addIndexPath:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (long long)count;
- (void)removeIndexPath:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)containsIndexPath:(id)a0;
- (void)enumerateIndexPathsUsingBlock:(id /* block */)a0;
- (void)setIndexPathSet:(id)a0;

@end
