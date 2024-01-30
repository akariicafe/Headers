@class OITSUImage, OITSUColor;

@interface MFPImageBrush : MFPBrush {
    OITSUImage *mPhoneImage;
    OITSUColor *mPhonePatternColor;
}

- (id)color;
- (void)fillPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhoneImage:(id)a0;

@end
