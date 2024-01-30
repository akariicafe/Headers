@interface LegacyTileHostLayer : CALayer {
    void *_tileGrid;
}

- (id)actionForKey:(id)a0;
- (void)renderInContext:(struct CGContext { } *)a0;
- (id)initWithTileGrid:(void *)a0;

@end
