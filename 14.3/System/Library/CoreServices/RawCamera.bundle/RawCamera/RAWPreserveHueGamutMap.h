@class CIImage, NSNumber;

@interface RAWPreserveHueGamutMap : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    BOOL inputEnabled;
    BOOL inputShouldWarn;
    NSNumber *inputVersion;
}

+ (id)customAttributes;

- (id)customAttributes;
- (void).cxx_destruct;
- (void)setInputEnabled:(id)a0;
- (id)outputImage;
- (id)inputShouldWarn;
- (id)inputEnabled;
- (void)setInputShouldWarn:(id)a0;

@end
