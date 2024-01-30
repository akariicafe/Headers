@class NSArray, NSDictionary, NSData, NSString, AVExternalDeviceInternal;
@protocol AVExternalDeviceDelegate;

@interface AVExternalDevice : NSObject {
    AVExternalDeviceInternal *_externalDevice;
}

@property (nonatomic) id<AVExternalDeviceDelegate> delegate;
@property (readonly, nonatomic) NSArray *screenIDs;
@property (readonly, nonatomic) NSDictionary *screenInputCapabilities;
@property (readonly, nonatomic) NSDictionary *screenPrimaryInputDevices;
@property (readonly, nonatomic) NSDictionary *screenViewAreas;
@property (readonly, nonatomic) NSDictionary *screenSafeAreas;
@property (readonly, nonatomic) NSData *OEMIcon;
@property (readonly, nonatomic) NSArray *OEMIcons;
@property (readonly, nonatomic) NSString *OEMIconLabel;
@property (readonly, nonatomic) BOOL OEMIconVisible;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSArray *externalDeviceHIDs;
@property (readonly, nonatomic) BOOL nightMode;
@property (readonly, nonatomic) BOOL nightModeSupported;
@property (readonly, nonatomic) BOOL rightHandDrive;
@property (readonly, nonatomic) NSArray *limitedUIElements;
@property (readonly, nonatomic) BOOL limitedUI;
@property (readonly, nonatomic) BOOL ownsScreen;
@property (readonly, nonatomic) BOOL ownsTurnByTurnNavigation;
@property (readonly, nonatomic) BOOL recognizingSpeech;
@property (readonly, nonatomic) NSArray *supportedFeatures;
@property (readonly, nonatomic) long long electronicTollCollection;
@property (readonly, nonatomic) long long navigationAidedDriving;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) long long transportType;
@property (readonly, nonatomic) NSData *MFiCertificateSerialNumber;

+ (id)currentExternalDevice;
+ (id)sharedLocalDevice;
+ (id)currentCarPlayExternalDevice;

- (struct OpaqueFigEndpoint { } *)figEndpoint;
- (id)_figEndpointPropertyValueForKey:(struct __CFString { } *)a0;
- (id)_screenInfo;
- (void)requestCarUI;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { } *)a0;
- (void)requestCarUIForURL:(id)a0 withUUID:(id)a1;
- (id)externalDeviceHIDWithUUID:(id)a0;
- (void)requestCarUIForURL:(id)a0;
- (void)requestViewArea:(long long)a0 forScreenID:(id)a1;
- (id)requestTurnByTurnNavigationOwnership;
- (id)borrowScreenForClient:(id)a0 reason:(id)a1;
- (void)takeScreenForClient:(id)a0 reason:(id)a1;
- (void)takeScreenForConnection;
- (void)sendCommand:(id)a0 withParameters:(id)a1;
- (void)_triggerFakeNotificationNamed:(id)a0 withPayload:(id)a1;
- (id)_weakReference;
- (id)init;
- (void)dealloc;

@end
