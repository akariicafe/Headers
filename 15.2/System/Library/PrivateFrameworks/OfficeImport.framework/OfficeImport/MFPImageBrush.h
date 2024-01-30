@class OITSUImage, OITSUColor;

@interface MFPImageBrush : MFPBrush {
    OITSUImage *mPhoneImage;
    OITSUColor *mPhonePatternColor;
}

- (id)color;
- (void).cxx_destruct;
- (void)fillPath:(id)a0;
- (id)initWithPhoneImage:(id)a0;

@end
