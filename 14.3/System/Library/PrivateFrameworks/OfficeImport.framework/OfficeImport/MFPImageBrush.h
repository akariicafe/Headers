@class OITSUImage, OITSUColor;

@interface MFPImageBrush : MFPBrush {
    OITSUImage *mPhoneImage;
    OITSUColor *mPhonePatternColor;
}

- (void).cxx_destruct;
- (id)color;
- (void)fillPath:(id)a0;
- (id)initWithPhoneImage:(id)a0;

@end
