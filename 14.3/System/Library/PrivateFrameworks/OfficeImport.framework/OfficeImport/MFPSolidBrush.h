@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {
    OITSUColor *mColor;
}

- (id)initWithColor:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (void)setColor:(id)a0;
- (void)fillPath:(id)a0 evenOddRule:(BOOL)a1;

@end
