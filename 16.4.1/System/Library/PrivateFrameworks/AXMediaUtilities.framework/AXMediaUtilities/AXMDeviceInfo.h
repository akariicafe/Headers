@class NSString, NSDictionary, NSValue, NSNumber;

@interface AXMDeviceInfo : NSObject {
    BOOL _isInternalInstall;
}

@property (retain, nonatomic) NSNumber *supportsARM64;
@property (retain, nonatomic) NSNumber *supportsARMv6;
@property (retain, nonatomic) NSNumber *supportsARMv7;
@property (retain, nonatomic) NSNumber *supportsARMv7s;
@property (retain, nonatomic) NSNumber *supports720pPlayback;
@property (retain, nonatomic) NSNumber *supports1080pPlayback;
@property (retain, nonatomic) NSString *cpuArchitecture;
@property (retain, nonatomic) NSNumber *processorCount;
@property (retain, nonatomic) NSNumber *physicalMemory;
@property (retain, nonatomic) NSNumber *hasAmbientLightSensor;
@property (retain, nonatomic) NSNumber *hasDualLensCamera;
@property (retain, nonatomic) NSDictionary *displayZoomSizes;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *computerName;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceNameClassic;
@property (retain, nonatomic) NSString *deviceNameGS;
@property (retain, nonatomic) NSString *deviceNameLocalized;
@property (retain, nonatomic) NSString *deviceClass;
@property (retain, nonatomic) NSString *deviceVariant;
@property (retain, nonatomic) NSString *hardwareModel;
@property (retain, nonatomic) NSString *deviceModelNumber;
@property (retain, nonatomic) NSString *marketingName;
@property (retain, nonatomic) NSString *marketingProductName;
@property (retain, nonatomic) NSString *marketingVersion;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSValue *mainScreenSizeWidth;
@property (retain, nonatomic) NSValue *mainScreenSizeHeight;
@property (retain, nonatomic) NSNumber *mainScreenOrientation;
@property (retain, nonatomic) NSNumber *mainScreenScale;

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (id)_jetsamInfo;
- (id)privilegedSystemReport;
- (id)systemReport;

@end
