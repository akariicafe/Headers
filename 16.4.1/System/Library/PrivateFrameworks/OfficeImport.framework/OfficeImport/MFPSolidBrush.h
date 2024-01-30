@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {
    OITSUColor *mColor;
}

- (id)color;
- (id)initWithColor:(id)a0;
- (void)fillPath:(id)a0;
- (void)setColor:(id)a0;
- (void).cxx_destruct;

@end
