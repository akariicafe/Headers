@class OITSUColor;

@interface MFPen : NSObject <MFObject> {
    int m_penStyle;
    int m_penWidth;
    OITSUColor *m_colour;
    double *m_userStyleArray;
}

+ (id)pen;
+ (id)penWithStyle:(int)a0 width:(int)a1 colour:(id)a2 styleArray:(double *)a3;

- (id)init;
- (void).cxx_destruct;
- (int)getWidth;
- (int)getStyle;
- (id)getColor;
- (id)initWithStyle:(int)a0 width:(int)a1 colour:(id)a2 styleArray:(double *)a3;
- (int)selectInto:(id)a0;

@end
