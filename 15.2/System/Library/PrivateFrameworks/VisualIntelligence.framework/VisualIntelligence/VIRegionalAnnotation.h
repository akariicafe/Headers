@class NSString;

@interface VIRegionalAnnotation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBoundingBox;
@property (readonly, nonatomic) float confidence;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0 normalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2;

@end
