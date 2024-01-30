@interface CUINamedLayerImage : CUINamedImage

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) BOOL fixedFrame;

- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;

@end
