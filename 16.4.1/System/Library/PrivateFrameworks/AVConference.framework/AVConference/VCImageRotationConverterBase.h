@interface VCImageRotationConverterBase : VCImageConverterBase {
    struct OpaqueVTPixelRotationSession { } *_rotationSession;
    unsigned int _rotationAngle;
}

- (void)dealloc;
- (id)initWithRotationAngle:(unsigned int)a0 formatType:(unsigned int)a1;

@end
