@interface PIApertureRedEyeProcessorKernel : CIImageProcessorKernel

+ (int)outputFormat;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })ROIForCenterPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
+ (void)convertFixed16:(const unsigned short *)a0 toFloat:(float *)a1 count:(unsigned long long)a2;
+ (void)convertFloat:(const float *)a0 toFixed16:(unsigned short *)a1 count:(unsigned long long)a2;

@end
