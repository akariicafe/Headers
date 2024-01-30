@class MFFont, MFPath, MFBrush, OITSUColor, MFTransform, NSMutableArray, NSObject, MFPalette, MFPen;
@protocol MFDeviceDriver;

@interface MFDeviceContext : NSObject <NSCopying> {
    NSObject<MFDeviceDriver> *m_driver;
    BOOL m_textUpdateCP;
    double m_miterLimit;
    int m_textHorizontalAlign;
    int m_textVerticalAlign;
    int m_textDirection;
    MFFont *m_font;
    OITSUColor *m_textColour;
    int m_textBreakExtra;
    int m_textBreakCount;
    int m_textCharExtra;
    OITSUColor *m_bkColour;
    int m_bkMode;
    struct CGPoint { double x; double y; } m_brushOrg;
    struct CGPoint { double x; double y; } m_penPos;
    int m_arcDirection;
    int m_polyFillMode;
    MFTransform *m_transform;
    MFPen *m_pen;
    MFBrush *m_brush;
    MFPalette *m_selectedPalette;
    int m_rop2;
    int m_stretchMode;
    MFPath *m_path;
}

@property (readonly, nonatomic) NSMutableArray *clippingPaths;
@property (nonatomic) BOOL clippingIsRestarted;

+ (id)deviceContextWithDriver:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFont:(id)a0;
- (id)initWithDriver:(id)a0;
- (id)getPen;
- (void)setMiterLimit:(double)a0;
- (void)setPath:(id)a0;
- (id)getFont;
- (void)setPen:(id)a0;
- (int)getRop2;
- (id)getPath;
- (void)setBrush:(id)a0;
- (struct CGPoint { double x0; double x1; })getPenPosition;
- (void)setPenPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)getTextUpdateCP;
- (void)setTextUpdateCP:(BOOL)a0;
- (double)getMiterLimit;
- (int)getTextHorizontalAlign;
- (void)setTextHorizontalAlign:(int)a0;
- (int)getTextVerticalAlign;
- (void)setTextVerticalAlign:(int)a0;
- (int)getTextDirection;
- (void)setTextDirection:(int)a0;
- (id)getTextColour;
- (void)setTextColour:(id)a0;
- (int)getTextBreakExtra;
- (int)getTextBreakCount;
- (void)setTextJustification:(int)a0 in_breakCount:(int)a1;
- (int)getTextCharExtra;
- (void)setTextCharExtra:(int)a0;
- (id)getBkColour;
- (void)setBkColour:(id)a0;
- (int)getBkMode;
- (void)setBkMode:(int)a0;
- (struct CGPoint { double x0; double x1; })getBrushOrg;
- (void)setBrushOrg:(struct CGPoint { double x0; double x1; })a0;
- (int)getArcDirection;
- (void)setArcDirection:(int)a0;
- (int)getPolyFillMode;
- (void)setPolyFillMode:(int)a0;
- (int)getStretchBltMode;
- (void)setStretchBltMode:(int)a0;
- (id)getCurrentTransform;
- (void)setCurrentTransform:(id)a0;
- (id)getSelectedPalette;
- (void)setSelectedPalette:(id)a0;
- (id)getBrush;
- (void)setRop2:(int)a0;

@end
