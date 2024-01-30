@interface PXMutableIndexPathSet : PXIndexPathSet

- (void)modifySectionIndexSetForDataSourceIdentifier:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)minusIndexPathSet:(id)a0;
- (void)unionIndexPathSet:(id)a0;
- (void)modifyItemIndexSetForDataSourceIdentifier:(unsigned long long)a0 section:(long long)a1 usingBlock:(id /* block */)a2;
- (void)addIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)removeAllIndexPaths;
- (void)modifySubitemIndexSetForDataSourceIdentifier:(unsigned long long)a0 section:(long long)a1 item:(long long)a2 usingBlock:(id /* block */)a3;
- (void)removeIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;

@end
