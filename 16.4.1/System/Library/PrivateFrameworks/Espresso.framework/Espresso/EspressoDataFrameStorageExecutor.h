@interface EspressoDataFrameStorageExecutor : NSObject

- (void)executeDataFrameStorage:(id)a0 withNetwork:(struct { void *x0; int x1; })a1 block:(id /* block */)a2 blockPrepareForIndex:(id /* block */)a3;
- (void)executeDataFrameStorage:(id)a0 withNetwork:(struct { void *x0; int x1; })a1 block:(id /* block */)a2;
- (void)executeDataFrameStorage:(id)a0 withNetwork:(struct { void *x0; int x1; })a1 referenceNetwork:(struct { void *x0; int x1; })a2 block:(id /* block */)a3 blockPrepareForIndex:(id /* block */)a4;

@end
