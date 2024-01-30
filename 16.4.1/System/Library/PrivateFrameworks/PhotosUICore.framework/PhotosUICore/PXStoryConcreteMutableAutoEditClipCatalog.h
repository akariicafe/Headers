@interface PXStoryConcreteMutableAutoEditClipCatalog : PXStoryConcreteAutoEditClipCatalog

- (void)addClip:(id)a0;
- (void)composeClipsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateMutableClipsUsingBlock:(id /* block */)a0;
- (void)enumeratePairsOfMutableClipsUsingBlock:(id /* block */)a0;
- (void)updateClipAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (void)updateClipForDisplayAsset:(id)a0 usingBlock:(id /* block */)a1;

@end
