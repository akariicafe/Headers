@class NSMutableDictionary;

@interface NTKExtragalacticGlyphShapes : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _shapeFrame;
}

@property (retain, nonatomic) NSMutableDictionary *glyphLayers;

- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllPaths;
- (void)setPath:(id)a0 forGlyphColor:(unsigned long long)a1;
- (void)setShapeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShapeLayer:(id)a0 atGlyphColor:(unsigned long long)a1;

@end
