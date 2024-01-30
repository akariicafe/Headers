@class OITSUColor;

@interface MFPen : NSObject <MFObject> {
    int m_penStyle;
    int m_penWidth;
    OITSUColor *m_colour;
    double *m_userStyleArray;
}

+ (id)pen;
+ (id)penWithStyle:(int)a0 width:(int)a1 colour:(id)a2 styleArray:(double *)a3;

- (int)getWidth;
- (void).cxx_destruct;
- (id)init;
- (int)selectInto:(id)a0;
- (id)initWithStyle:(int)a0 width:(int)a1 colour:(id)a2 styleArray:(double *)a3;
- (int)getStyle;
- (id)getColor;

@end
