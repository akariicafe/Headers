@class NSString, NSDictionary;

@interface HKStringDrawing : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) NSDictionary *attributes;

+ (id)stringDrawingWithText:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withAttributes:(id)a2;
+ (void)drawStrings:(id)a0 outlineWidth:(double)a1 outlineColor:(id)a2 context:(struct CGContext { } *)a3;

- (void)draw;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withAttributes:(id)a2;

@end
