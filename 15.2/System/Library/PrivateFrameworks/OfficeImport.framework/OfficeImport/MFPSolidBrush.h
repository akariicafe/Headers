@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {
    OITSUColor *mColor;
}

- (id)color;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (void)setColor:(id)a0;
- (void)fillPath:(id)a0 evenOddRule:(BOOL)a1;

@end
