@class NSArray;

@interface PHASEVoxelTreeView : PHASEGeometryView

@property (readonly, copy, nonatomic) NSArray *subtrees;

- (void).cxx_destruct;
- (id)init;
- (id)levelViewWithIndex:(unsigned long long)a0 inLevelIndex:(unsigned long long)a1;
- (id)initWithEngine:(id)a0 shapeHandle:(struct Handle64 { unsigned long long x0; })a1 voxelTreeInfo:(const void *)a2;
- (id)getLevelViewWithIndex:(unsigned long long)a0 inLevelIndex:(unsigned long long)a1;

@end
