@interface ARImageCroppingTechnique : ARTechnique {
    struct OpaqueVTPixelTransferSession { } *_vtPixelTransferSession;
    struct __CVPixelBufferPool { } *_croppedPixelBufferPool;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } croppedImageSize;

- (id)processData:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithCroppedImageSize:(struct CGSize { double x0; double x1; })a0;

@end
