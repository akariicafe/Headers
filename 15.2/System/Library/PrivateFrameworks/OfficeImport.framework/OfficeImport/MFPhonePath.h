@class OITSUBezierPath;

@interface MFPhonePath : MFPath {
    OITSUBezierPath *m_path;
    int m_state;
}

- (int)abort;
- (int)end;
- (BOOL)isOpen;
- (int)flatten;
- (int)begin;
- (int)fill:(id)a0;
- (int)state;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (int)widen:(id)a0;
- (int)stroke:(id)a0;
- (int)closeFigure;
- (void)appendBezierPath:(id)a0 dc:(id)a1;
- (id)initWithPath:(id)a0 state:(int)a1;
- (id)getBezierPath;

@end
