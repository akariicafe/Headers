@interface ARImageScalingTechnique : ARTechnique {
    struct OpaqueVTPixelTransferSession { } *_vtPixelTransferSession;
    struct __CVPixelBufferPool { } *_scaledPixelBufferPool;
    BOOL _shouldUseScaleFactor;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } scaledSize;
@property (nonatomic) unsigned int conversionPixelFormatType;
@property (readonly, nonatomic) unsigned char downscaleFactor;

- (id)processData:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithScaledSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithDownscaleFactor:(unsigned char)a0;

@end
