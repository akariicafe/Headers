@class NSArray, NSString, AVCaptureDeviceFormat, AVCaptureDevice;

@interface ARVideoFormat : NSObject <NSCopying> {
    AVCaptureDevice *_device;
    AVCaptureDeviceFormat *_deviceFormat;
    struct CGSize { double width; double height; } _imageResolution;
}

@property (retain, nonatomic) NSArray *frameRatesByPowerUsage;
@property (readonly, nonatomic) AVCaptureDevice *device;
@property (readonly, nonatomic) AVCaptureDeviceFormat *deviceFormat;
@property (retain, nonatomic) AVCaptureDeviceFormat *depthDataFormat;
@property (readonly, nonatomic) NSString *captureDeviceType;
@property (readonly, nonatomic) long long captureDevicePosition;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageResolution;
@property (readonly, nonatomic) long long framesPerSecond;

+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1;
+ (id)bestVideoFormatForDevicePosition:(long long)a0 deviceType:(id)a1 resolution:(struct { int x0; int x1; })a2 frameRate:(double)a3 videoBinned:(BOOL)a4;
+ (id)bestVideoFormatForDevicePosition:(long long)a0 deviceType:(id)a1 resolution:(struct { int x0; int x1; })a2 frameRates:(id)a3 videoBinned:(BOOL)a4;
+ (id)bestTimeOfFlightFormatForDevicePosition:(long long)a0 frameRates:(id)a1;
+ (id)bestDepthFormatForDeviceFormat:(id)a0;
+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1 videoBinned:(BOOL)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithImageResolution:(struct CGSize { double x0; double x1; })a0 captureDevicePosition:(long long)a1 captureDeviceType:(id)a2;
- (id)initWithCaptureDevice:(id)a0 format:(id)a1;

@end
