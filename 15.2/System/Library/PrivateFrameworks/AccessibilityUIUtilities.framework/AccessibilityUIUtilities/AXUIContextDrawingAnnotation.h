@class NSString;

@interface AXUIContextDrawingAnnotation : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;

+ (id)contextAnnotationMap;
+ (void)addLabel:(id)a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withContext:(struct CGContext { } *)a2;
+ (id)annotationsForContext:(struct CGContext { } *)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
