@interface ARImageRotationTechnique : ARTechnique {
    struct OpaqueVTPixelRotationSession { } *_vtPixelRotationSession;
    struct __CVPixelBufferPool { } *_bufferPool;
}

@property (readonly, nonatomic) long long rotationAngle;
@property (readonly, nonatomic) long long mirrorMode;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_fullDescription;
- (id)processData:(id)a0;
- (int)_rotateAccelerate:(struct __CVBuffer { } *)a0 pOutputBuffer:(struct __CVBuffer **)a1;
- (id)initWithRotation:(long long)a0 mirror:(long long)a1;
- (unsigned long long)requiredSensorDataTypes;

@end
