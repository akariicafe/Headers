@class UIColor, _UIImageCUIVectorGlyphContent, NSString, UIImageAsset;

@interface _UIImageSymbolLayer : NSObject

@property (retain, nonatomic) UIImageAsset *asset;
@property (retain, nonatomic) _UIImageCUIVectorGlyphContent *content;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) double scaleFactor;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isSystemImage) BOOL systemImage;

+ (id)_symbolLayerWithName:(id)a0 color:(id)a1;
+ (id)_symbolLayerWithSystemName:(id)a0 color:(id)a1;
+ (id)_symbolLayerWithSystemName:(id)a0 color:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 scaleFactor:(double)a3;
+ (id)_symbolLayerWithName:(id)a0 color:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 scaleFactor:(double)a3;
+ (id)_symbolLayerWithImage:(id)a0 color:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 scaleFactor:(double)a3;

- (void).cxx_destruct;

@end
