@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_canvas;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } m_canvasTransform;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_viewBox;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } m_viewBoxTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } m_worldToDeviceTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } m_combinedTransform;
}

+ (int)getROP:(id)a0;

- (id)createPath;
- (id)initWithCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createHatchBrush:(id)a0 in_hatchstyle:(int)a1;
- (id)createNullBrush;
- (void)applyTransformsToCurrentContext;
- (int)activateTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (int)alphaBlend:(id)a0 in_xDest:(int)a1 in_yDest:(int)a2 in_widthDest:(int)a3 in_heightDest:(int)a4 in_sourceImage:(id)a5 in_xSrc:(int)a6 in_ySrc:(int)a7 in_widthSrc:(int)a8 in_heightSrc:(int)a9 in_sourceConstantOpacity:(unsigned char)a10 in_useSourceAlphaChannel:(BOOL)a11 in_xform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a12 in_colour:(unsigned int)a13;
- (int)angleArc:(id)a0 x:(int)a1 y:(int)a2 radius:(unsigned int)a3 startAngle:(double)a4 sweepAngle:(double)a5;
- (int)arc:(id)a0 nLeftRect:(int)a1 nTopRect:(int)a2 nRightRect:(int)a3 nBottomRect:(int)a4 nXStartArc:(int)a5 nYStartArc:(int)a6 nXEndArc:(int)a7 nYEndArc:(int)a8;
- (int)arcTo:(id)a0 nLeftRect:(int)a1 nTopRect:(int)a2 nRightRect:(int)a3 nBottomRect:(int)a4 nXStartArc:(int)a5 nYStartArc:(int)a6 nXEndArc:(int)a7 nYEndArc:(int)a8;
- (int)bezier:(id)a0 x:(int)a1 y:(int)a2 x2:(int)a3 y2:(int)a4 x3:(int)a5 y3:(int)a6 x4:(int)a7 y4:(int)a8;
- (int)bezierTo:(id)a0 x:(int)a1 y:(int)a2 x2:(int)a3 y2:(int)a4 x3:(int)a5 y3:(int)a6;
- (int)bitBlt:(id)a0 in_xDest:(int)a1 in_yDest:(int)a2 in_widthDest:(int)a3 in_heightDest:(int)a4 in_sourceImage:(id)a5 in_xSrc:(int)a6 in_ySrc:(int)a7 in_rop:(unsigned int)a8 in_xform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a9 in_colour:(unsigned int)a10;
- (int)chord:(id)a0 leftRect:(int)a1 topRect:(int)a2 rightRect:(int)a3 bottomRect:(int)a4 xStartArc:(int)a5 yStartArc:(int)a6 xEndArc:(int)a7 yEndArc:(int)a8;
- (id)createBitmap:(id)a0 in_width:(int)a1 in_height:(int)a2 in_planes:(int)a3 in_bitsPerPixel:(int)a4 in_bitmap:(const char *)a5 in_bitmapSize:(unsigned int)a6;
- (id)createDIBitmap:(id)a0 in_dib:(const char *)a1 in_dibSize:(unsigned int)a2 in_usage:(int)a3;
- (id)createDIBitmap:(id)a0 in_header:(const char *)a1 in_headerSize:(unsigned int)a2 in_bitmap:(const char *)a3 in_bitmapSize:(unsigned int)a4 in_usage:(int)a5;
- (id)createFont:(int)a0;
- (id)createFont:(int)a0 lfWidth:(int)a1 lfEscapement:(int)a2 lfOrientation:(int)a3 lfWeight:(int)a4 lfItalic:(BOOL)a5 lfUnderline:(BOOL)a6 lfStrikeOut:(BOOL)a7 lfCharSet:(int)a8 lfOutPrecision:(int)a9 lfClipPrecision:(unsigned char)a10 lfQuality:(int)a11 pitch:(int)a12 family:(int)a13 lfFaceName:(id)a14;
- (id)createFontIndirectW:(int)a0 lfWidth:(int)a1 lfEscapement:(int)a2 lfOrientation:(int)a3 lfWeight:(int)a4 lfItalic:(BOOL)a5 lfUnderline:(BOOL)a6 lfStrikeOut:(BOOL)a7 lfCharSet:(int)a8 lfOutPrecision:(int)a9 lfClipPrecision:(unsigned char)a10 lfQuality:(int)a11 pitch:(int)a12 family:(int)a13 lfFaceName:(id)a14 elfFullName:(id)a15 elfStyle:(id)a16 elfVersion:(unsigned int)a17 elfStyleSize:(unsigned int)a18 elfMatch:(unsigned int)a19 elfVendorId:(unsigned int)a20 elfCulture:(unsigned int)a21;
- (id)createPatternBrush:(id)a0 usePaletteForBilevel:(BOOL)a1;
- (id)createPen;
- (id)createPen:(int)a0 in_width:(int)a1 in_colour:(id)a2 in_userStyleArray:(double *)a3;
- (id)createRegionWithPath:(id)a0;
- (id)createRegionWithRects:(id)a0 in_dc:(id)a1;
- (id)createSolidBrush:(id)a0;
- (void)drawBezierPath:(id)a0 dc:(id)a1 fill:(BOOL)a2 stroke:(BOOL)a3;
- (int)ellipse:(id)a0 x1:(int)a1 y1:(int)a2 x2:(int)a3 y2:(int)a4;
- (int)excludeClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)extTextOut:(id)a0 px:(int *)a1 py:(int *)a2 in_text:(id)a3 options:(int)a4 left:(int)a5 top:(int)a6 right:(int)a7 bottom:(int)a8 spacingValues:(int *)a9 numValues:(int)a10;
- (int)fillRectangle:(id)a0 x1:(int)a1 y1:(int)a2 x2:(int)a3 y2:(int)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCanvas;
- (int)intersectClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)lineTo:(id)a0 x:(double)a1 y:(double)a2;
- (int)maskBlt:(id)a0 in_xDest:(int)a1 in_yDest:(int)a2 in_widthDest:(int)a3 in_heightDest:(int)a4 in_sourceImage:(id)a5 in_xSrc:(int)a6 in_ySrc:(int)a7 in_maskImage:(id)a8 in_xMask:(int)a9 in_yMask:(int)a10 in_rop:(unsigned int)a11 in_xform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a12 in_colour:(unsigned int)a13;
- (int)patBlt:(id)a0 in_x:(int)a1 in_y:(int)a2 in_width:(int)a3 in_height:(int)a4 in_rop:(unsigned int)a5;
- (int)pie:(id)a0 nLeftRect:(int)a1 nTopRect:(int)a2 nRightRect:(int)a3 nBottomRect:(int)a4 nXStartArc:(int)a5 nYStartArc:(int)a6 nXEndArc:(int)a7 nYEndArc:(int)a8;
- (int)plgBlt:(id)a0 in_destinationParallelogram:(struct CGPoint { double x0; double x1; } *)a1 in_sourceImage:(id)a2 in_xSrc:(int)a3 in_ySrc:(int)a4 in_widthSrc:(int)a5 in_heightSrc:(int)a6 in_maskImage:(id)a7 in_xMask:(int)a8 in_yMask:(int)a9 in_xform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a10 in_colour:(unsigned int)a11;
- (int)polyPolygon:(id)a0 in_points:(struct CGPoint { double x0; double x1; } *)a1 in_polyCounts:(int *)a2 in_count:(int)a3;
- (int)polyPolyline:(id)a0 in_points:(struct CGPoint { double x0; double x1; } *)a1 in_polyCounts:(int *)a2 in_count:(int)a3;
- (int)polygon:(id)a0 in_points:(struct CGPoint { double x0; double x1; } *)a1 in_count:(int)a2;
- (int)polyline:(id)a0 in_points:(struct CGPoint { double x0; double x1; } *)a1 in_count:(int)a2;
- (int)rectangle:(id)a0 x1:(int)a1 y1:(int)a2 x2:(int)a3 y2:(int)a4;
- (int)roundRect:(id)a0 left:(int)a1 top:(int)a2 right:(int)a3 bottom:(int)a4 rx:(double)a5 ry:(double)a6;
- (int)setMetaRgn;
- (int)setViewBox:(double)a0 top:(double)a1 width:(double)a2 height:(double)a3;
- (int)stretchBlt:(id)a0 in_xDest:(int)a1 in_yDest:(int)a2 in_widthDest:(int)a3 in_heightDest:(int)a4 in_sourceImage:(id)a5 in_xSrc:(int)a6 in_ySrc:(int)a7 in_widthSrc:(int)a8 in_heightSrc:(int)a9 in_rop:(unsigned int)a10 in_xform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a11 in_colour:(unsigned int)a12;
- (int)textOut:(id)a0 px:(int *)a1 py:(int *)a2 in_text:(id)a3;
- (void)updateViewBoxTransform;

@end
