@interface FigCaptureCameraCalibrationDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateCameraCalibrationData;

- (int)sinkType;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
