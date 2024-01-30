@class NSArray, NSString;
@protocol NUDevice, NUDisplay;

@interface NUPlatform : NSObject

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL supportsAutomaticGraphicsSwitching;
@property (retain, nonatomic) id<NUDevice> integratedDevice;
@property (retain, nonatomic) id<NUDevice> discreteDevice;
@property (nonatomic) BOOL hasHeadlessGPU;
@property (retain, nonatomic) id<NUDevice> headlessDevice;
@property (retain, nonatomic) id<NUDevice> cpuDevice;
@property (readonly, nonatomic) BOOL defaultSupportsLiveVideoRendering;
@property (nonatomic) BOOL hasExtendedColorDisplay;
@property (readonly, nonatomic) id<NUDevice> mainDevice;
@property (readonly, nonatomic) NSArray *displays;
@property (readonly, nonatomic) id<NUDisplay> mainDisplay;
@property (readonly, nonatomic) BOOL supportsLiveVideoRendering;
@property (readonly, nonatomic) BOOL supportsANE;

+ (id)currentPlatform;

- (void)clearCaches;
- (id)deviceForDisplay:(id)a0;
- (id)currentDevice;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)displayWithIdentifier:(id)a0;

@end
