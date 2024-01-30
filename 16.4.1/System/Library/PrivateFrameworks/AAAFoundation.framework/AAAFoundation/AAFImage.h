@interface AAFImage : NSObject

+ (id)circularImageData:(id)a0 withDiameter:(double)a1;
+ (struct CGImage { } *)circularImage:(struct CGImage { } *)a0 withDiameter:(double)a1 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)circularImageData:(id)a0 withDiameter:(double)a1 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tranformedRectForImageSize:(struct CGSize { double x0; double x1; })a0 withDiameter:(double)a1 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
