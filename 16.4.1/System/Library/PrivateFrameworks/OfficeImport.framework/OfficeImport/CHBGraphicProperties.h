@interface CHBGraphicProperties : NSObject

+ (id)mapAssociatedEscherObjectstate:(id)a0;
+ (int)lineWeightEnumFromWidth:(float)a0;
+ (id)mapFillStyle:(const struct XlChartFillStyle { void /* function */ **x0; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x1; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x2; unsigned short x3; unsigned short x4; unsigned short x5; BOOL x6; BOOL x7; BOOL x8; } *)a0 xlPictureFormat:(const struct XlChartPicF { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; double x2; int x3; int x4; int x5; unsigned char x6; } *)a1 state:(id)a2;
+ (id)mapFillStyleForMarker:(const struct XlChartMarkerStyle { void /* function */ **x0; int x1; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x2; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x3; unsigned int x4; unsigned short x5; unsigned short x6; BOOL x7; BOOL x8; BOOL x9; } *)a0 complex:(BOOL)a1 state:(id)a2;
+ (id)mapPresetDashFromPattern:(int)a0;
+ (char)oaPresetDashTypeFromLinePatternEnum:(int)a0;
+ (id)oadGraphicPropertiesFromShapePropsStream:(const char *)a0 size:(unsigned int)a1;
+ (id)oadGraphicPropertiesFromState:(id)a0 xlLineStyle:(const struct XlChartLineStyle { void /* function */ **x0; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x1; int x2; int x3; unsigned short x4; BOOL x5; BOOL x6; BOOL x7; float x8; int x9; } *)a1 xlFillStyle:(const struct XlChartFillStyle { void /* function */ **x0; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x1; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x2; unsigned short x3; unsigned short x4; unsigned short x5; BOOL x6; BOOL x7; BOOL x8; } *)a2;
+ (id)oadGraphicPropertiesFromXlChartFrameType:(struct XlChartFrameType { void /* function */ **x0; float x1; float x2; float x3; float x4; int x5; int x6; int x7; int x8; struct XlChartLineStyle *x9; struct XlChartFillStyle *x10; struct XlChartPicF *x11; BOOL x12; BOOL x13; BOOL x14; char *x15; unsigned int x16; } *)a0 state:(id)a1;
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const struct XlChartSeriesFormat { void /* function */ **x0; struct XlChartLineStyle *x1; struct XlChartFillStyle *x2; struct XlChartMarkerStyle *x3; struct XlChartPicF *x4; char *x5; char *x6; unsigned int x7; unsigned int x8; int x9; unsigned short x10; unsigned short x11; unsigned short x12; int x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; } *)a0 state:(id)a1;
+ (id)oadGraphicPropertiesFromXlChartTextFrame:(void *)a0 state:(id)a1;
+ (id)oadGraphicPropertiesFromXlLeaderLineStyleInPlot:(const void *)a0 state:(id)a1;
+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const struct XlChartMarkerStyle { void /* function */ **x0; int x1; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x2; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x3; unsigned int x4; unsigned short x5; unsigned short x6; BOOL x7; BOOL x8; BOOL x9; } *)a0 complex:(BOOL)a1 state:(id)a2;
+ (id)oadStrokeFrom:(const struct XlChartLineStyle { void /* function */ **x0; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x1; int x2; int x3; unsigned short x4; BOOL x5; BOOL x6; BOOL x7; float x8; int x9; } *)a0;
+ (int)presetLinePatternEnumFromDash:(id)a0;
+ (float)widthFromLineWeightEnum:(int)a0;

@end
