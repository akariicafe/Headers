@class NSArray, NSString, AVCaptureDeviceFormat, AVCaptureDevice;

@interface ARVideoFormat : NSObject <ARDaemonSecureCoding, NSCopying> {
    AVCaptureDevice *_device;
    AVCaptureDeviceFormat *_deviceFormat;
    struct CGSize { double width; double height; } _imageResolution;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *frameRatesByPowerUsage;
@property (readonly, nonatomic) AVCaptureDevice *device;
@property (readonly, nonatomic) AVCaptureDeviceFormat *deviceFormat;
@property (retain, nonatomic) AVCaptureDeviceFormat *depthDataFormat;
@property (readonly, nonatomic) long long captureDevicePosition;
@property (readonly, nonatomic) NSString *captureDeviceType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageResolution;
@property (readonly, nonatomic) long long framesPerSecond;

+ (id)bestVideoFormatForDevicePosition:(long long)a0 deviceType:(id)a1 resolution:(struct { int x0; int x1; })a2 frameRate:(double)a3 videoBinned:(BOOL)a4;
+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1;
+ (id)bestVideoFormatForDevicePosition:(long long)a0 deviceType:(id)a1 resolution:(struct { int x0; int x1; })a2 frameRates:(id)a3 videoBinned:(BOOL)a4;
+ (id)bestTimeOfFlightFormatForDevicePosition:(long long)a0 frameRates:(id)a1;
+ (id)bestDepthFormatForDeviceFormat:(id)a0;
+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1 frameRate:(double)a2;
+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1 videoBinned:(BOOL)a2 frameRate:(double)a3;
+ (id)_querySupportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1 videoBinned:(BOOL)a2 frameRate:(double)a3;
+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1 videoBinned:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithImageResolution:(struct CGSize { double x0; double x1; })a0 captureDevicePosition:(long long)a1 captureDeviceType:(id)a2;
- (id)initWithCaptureDevice:(id)a0 format:(id)a1;

@end
