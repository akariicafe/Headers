@interface PXMutableIndexPathSet : PXIndexPathSet

- (void)removeAllIndexPaths;
- (void)minusIndexPathSet:(id)a0;
- (void)modifySubitemIndexSetForDataSourceIdentifier:(long long)a0 section:(long long)a1 item:(long long)a2 usingBlock:(id /* block */)a3;
- (void)addIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)modifySectionIndexSetForDataSourceIdentifier:(long long)a0 usingBlock:(id /* block */)a1;
- (void)unionIndexPathSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)modifyItemIndexSetForDataSourceIdentifier:(long long)a0 section:(long long)a1 usingBlock:(id /* block */)a2;
- (void)removeIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end
