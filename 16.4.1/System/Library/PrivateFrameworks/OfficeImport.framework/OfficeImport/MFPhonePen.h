@interface MFPhonePen : MFPen {
    float m_PixelSize;
}

+ (id)penWithStyle:(int)a0 width:(int)a1 colour:(id)a2 styleArray:(double *)a3 LPToDPTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4;

- (void)applyDashedLinesToPath:(id)a0;
- (void)applyLineCapStyleToPath:(id)a0;
- (void)applyLineJoinStyleToPath:(id)a0 in_path:(id)a1;
- (id)initWithStyle:(int)a0 width:(int)a1 colour:(id)a2 styleArray:(double *)a3;
- (void)strokePath:(id)a0 in_path:(id)a1;

@end
