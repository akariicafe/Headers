@class NSArray;

@interface BWStillImageCaptureMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int snrType;
@property (nonatomic) float snr;
@property (nonatomic) int deviceType;
@property (retain, nonatomic) NSArray *slaveFocalLengths;
@property (retain, nonatomic) NSArray *slaveLensFNumbers;
@property (nonatomic) float totalZoomFactor;
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (nonatomic) int intelligentDistortionCorrectionVersion;
@property (nonatomic) int systemPressureLevel;
@property (nonatomic) int cameraControlsStatisticsMaster;

- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
