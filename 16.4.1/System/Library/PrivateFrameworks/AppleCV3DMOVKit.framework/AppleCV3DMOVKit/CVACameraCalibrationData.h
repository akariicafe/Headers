@class NSString, NSDictionary, AVCameraCalibrationData, NSData;

@interface CVACameraCalibrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *streamID;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSDictionary *calibrationDictionary;
@property (retain, nonatomic) AVCameraCalibrationData *calibrationData;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsicMatrix;
@property (nonatomic) struct CGSize { double width; double height; } intrinsicMatrixReferenceDimensions;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } extrinsicMatrix;
@property (nonatomic) float pixelSize;
@property (retain, nonatomic) NSData *lensDistortionLookupTable;
@property (retain, nonatomic) NSData *inverseLensDistortionLookupTable;
@property (nonatomic) struct CGPoint { double x; double y; } lensDistortionCenter;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateProperties:(id)a0;
- (id)initWithAVCameraCalibrationData:(id)a0 timestamp:(double)a1 streamID:(id)a2;

@end
