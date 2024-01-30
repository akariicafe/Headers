@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) int orientation;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
