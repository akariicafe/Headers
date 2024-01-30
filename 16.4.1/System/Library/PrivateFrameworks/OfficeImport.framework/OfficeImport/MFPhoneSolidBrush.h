@class OITSUColor;

@interface MFPhoneSolidBrush : MFPhoneBrush {
    OITSUColor *m_colour;
}

+ (id)solidBrushWithColour:(id)a0;

- (void).cxx_destruct;
- (id)initWithColour:(id)a0;
- (void)fillPath:(id)a0 in_path:(id)a1;

@end
