@interface ARImageRotationTechnique : ARTechnique {
    struct OpaqueVTImageRotationSession { } *_vtPixelTransferSession;
    struct __CVPixelBufferPool { } *_bufferPool;
}

@property (readonly, nonatomic) long long rotationAngle;
@property (readonly, nonatomic) long long mirrorMode;

- (id)processData:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_fullDescription;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithRotation:(long long)a0 mirror:(long long)a1;
- (int)_rotateAccelerate:(struct __CVBuffer { } *)a0 pOutputBuffer:(struct __CVBuffer **)a1;

@end
