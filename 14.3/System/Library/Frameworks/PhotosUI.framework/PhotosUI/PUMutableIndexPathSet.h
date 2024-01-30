@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet {
    NSMutableSet *_indexPaths;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsIndexPath:(id)a0;
- (void)enumerateIndexPathsUsingBlock:(id /* block */)a0;
- (void)setIndexPathSet:(id)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)addIndexPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeAllIndexPaths;
- (long long)count;
- (void)removeIndexPath:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;

@end
