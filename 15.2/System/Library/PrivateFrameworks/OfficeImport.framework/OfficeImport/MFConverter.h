@interface MFConverter : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInPoints:(id)a0;
+ (BOOL)mapToPdf:(id)a0;
+ (id)playToPDF:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 colorMap:(id)a2 fillMap:(id)a3;
+ (id)playToBitmap:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 colorMap:(id)a2 fillMap:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInLogicalUnits:(id)a0;
+ (id)play:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 colorMap:(id)a2 fillMap:(id)a3;
+ (void)fromBinary:(id)a0 toXml:(id)a1;
+ (void)playInCurrentContext:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 colorMap:(id)a2 fillMap:(id)a3;

@end
