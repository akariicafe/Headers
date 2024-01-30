@interface MKQuadTrie : NSObject {
    unsigned int _maxItems;
    struct { double width; double height; } _minSize;
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _initialRegion;
    void *__root;
}

- (id)allItems;
- (BOOL)remove:(id)a0;
- (id)initWithInitialRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 minimumSize:(struct { double x0; double x1; })a1 maximumItems:(unsigned int)a2;
- (id)itemsPassingRectTest:(id /* block */)a0 coordinateTest:(id /* block */)a1;
- (id)description;
- (void)clearAllItemsPerforming:(id /* block */)a0;
- (id)itemsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)foreach:(id /* block */)a0;
- (void)insert:(id)a0;
- (id)_itemsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)contains:(id)a0;
- (unsigned long long)count;
- (id)depthFirstDescription;
- (void)dealloc;
- (id)breadthFirstDescription;
- (id)itemDescriptions;

@end
