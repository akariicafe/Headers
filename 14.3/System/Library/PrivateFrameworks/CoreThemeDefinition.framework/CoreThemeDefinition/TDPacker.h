@class NSArray, _TDPackerNode;

@interface TDPacker : NSObject {
    id /* block */ _sizeHandler;
    NSArray *_objectsToPack;
}

@property (retain) _TDPackerNode *root;
@property (retain) NSArray *packedObjects;
@property (retain, nonatomic) NSArray *objectsToPack;
@property (readonly, nonatomic) unsigned long long countOfEmptyNodes;

- (void)pack;
- (void)dealloc;
- (id)_findNode:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (id)_splitNode:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (id)_growNodeToSize:(struct CGSize { double x0; double x1; })a0;
- (void)_countOfEmptyNodes:(id)a0 count:(unsigned long long *)a1;
- (id)_growRight:(struct CGSize { double x0; double x1; })a0;
- (id)_growDown:(struct CGSize { double x0; double x1; })a0;
- (void)setSizeHandler:(id /* block */)a0;
- (id /* block */)sizeHandler;
- (struct CGSize { double x0; double x1; })enclosingSize;
- (BOOL)objectAtIndexFit:(long long)a0;
- (struct CGPoint { double x0; double x1; })fitPositionOfObjectAtIndex:(long long)a0;

@end
