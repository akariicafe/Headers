@interface MKQuadTrie : NSObject {
    unsigned int _maxItems;
    struct { double width; double height; } _minSize;
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _initialRegion;
    void *__root;
}

- (id)allItems;
- (BOOL)contains:(id)a0;
- (BOOL)remove:(id)a0;
- (id)depthFirstDescription;
- (id)breadthFirstDescription;
- (id)itemsPassingRectTest:(id /* block */)a0 coordinateTest:(id /* block */)a1;
- (id)itemsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (unsigned long long)count;
- (id)_itemsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithInitialRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 minimumSize:(struct { double x0; double x1; })a1 maximumItems:(unsigned int)a2;
- (void)foreach:(id /* block */)a0;
- (id)itemDescriptions;
- (void)clearAllItemsPerforming:(id /* block */)a0;
- (id)description;
- (void)insert:(id)a0;

@end
