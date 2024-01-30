@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet {
    NSMutableSet *_indexPaths;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllIndexPaths;
- (long long)count;
- (void)addIndexPath:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeIndexPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)containsIndexPath:(id)a0;
- (void)enumerateIndexPathsUsingBlock:(id /* block */)a0;
- (void)setIndexPathSet:(id)a0;

@end
