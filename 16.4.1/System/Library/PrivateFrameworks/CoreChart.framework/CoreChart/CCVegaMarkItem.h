@class NSString, NSArray, CALayer, JSValue, NSObject;
@protocol CCVegaColorOrGradientInterface;

@interface CCVegaMarkItem : NSObject <CCVegaMarkItemInterface> {
    JSValue *_items;
}

@property (retain) JSValue *mark;
@property (readonly) double cornerRadius;
@property (readonly) NSString *shape;
@property (readonly) NSString *orient;
@property (readonly) double size;
@property (readonly) NSString *baseline;
@property (readonly) double radius;
@property (readonly) double theta;
@property (readonly) NSString *fontStyle;
@property (readonly) double fontSize;
@property (readonly) NSString *fontWeight;
@property (readonly) NSString *font;
@property (readonly) NSString *align;
@property (readonly) double x;
@property (readonly) double x2;
@property (readonly) double dx;
@property (readonly) double width;
@property (readonly) double y;
@property (readonly) double y2;
@property (readonly) double dy;
@property (readonly) double angle;
@property (readonly) double height;
@property (readonly) double opacity;
@property (readonly) NSObject<CCVegaColorOrGradientInterface> *fill;
@property (readonly) double fillOpacity;
@property (readonly) NSObject<CCVegaColorOrGradientInterface> *stroke;
@property (readonly) double strokeOpacity;
@property (readonly) double strokeWidth;
@property (readonly) NSString *strokeCap;
@property (readonly) NSArray *strokeDash;
@property (readonly) NSString *strokeJoin;
@property (readonly) NSString *interpolate;
@property (readonly) double strokeMiterLimit;
@property (readonly) NSString *path;
@property (readonly) double zindex;
@property (readonly) BOOL clip;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (retain, nonatomic) CALayer *caLayer;
@property (nonatomic) BOOL isDirty;

- (id)itemAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void).cxx_destruct;
- (id)initWithJSValue:(id)a0;
- (BOOL)defined;
- (id)getText;
- (BOOL)getBoolean:(id)a0 defaultValue:(BOOL)a1;
- (double)getDouble:(id)a0 defaultValue:(double)a1;
- (id)getObject:(id)a0 defaultValue:(id)a1;
- (id)getString:(id)a0 defaultValue:(id)a1;
- (struct CGPath { } *)newPathByCallingShapeFunction;

@end
