@class OITSUBezierPath;

@interface MFPhonePath : MFPath {
    OITSUBezierPath *m_path;
    int m_state;
}

- (int)begin;
- (int)end;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isOpen;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)fill:(id)a0;
- (int)flatten;
- (int)widen:(id)a0;
- (int)abort;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)state;
- (int)stroke:(id)a0;
- (int)closeFigure;
- (void)appendBezierPath:(id)a0 dc:(id)a1;
- (id)initWithPath:(id)a0 state:(int)a1;
- (id)getBezierPath;

@end
