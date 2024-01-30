@class OITSUColor;

@interface MFPhoneSolidBrush : MFPhoneBrush {
    OITSUColor *m_colour;
}

+ (id)solidBrushWithColour:(id)a0;

- (void).cxx_destruct;
- (void)fillPath:(id)a0 in_path:(id)a1;
- (id)initWithColour:(id)a0;

@end
