@class NSString, NSMutableDictionary;

@interface FBKGroupedDevice : NSObject <DEDDeviceLike, DEDDeviceFBKSupport, FBKDiffableObject>

@property (nonatomic, readonly) long long hash;
@property (retain) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)FBKKnownDevices;
+ (id)currentDevicePlatform;
+ (id)currentGroupedDevice;
+ (id)deviceDefaults;
+ (id)inspectFBKPairing;
+ (id)sortedDevices:(id)a0;

- (BOOL)isReady;
- (id)publicLogDescription;
- (id)build;
- (void)fetchIconImageDataForScale:(float)a0 completionCompletion:(id /* block */)a1;
- (id)displayName;
- (BOOL)hasCapabilities:(id)a0;
- (id)hashingKey;
- (id)deviceClass;
- (id)imageData;
- (id)color;
- (BOOL)isCurrentDevice;
- (id)productType;
- (id)identifier;
- (id)shortDescription;
- (BOOL)isEqualToDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)platform;
- (void)dealloc;
- (id)displayType;
- (void)addDevice:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)name;
- (id)initWithDevices:(id)a0;
- (void)_postDeviceChangeNotification;
- (void)_updateWithDevices:(id)a0;
- (id)anyDEDDevice;
- (id)bestStringForKey:(id)a0;
- (id)debugDetails;
- (id)dedIDSDevice;
- (id)dedSharingDevice;
- (id)deviceDataForSubmissionWithSession:(id)a0;
- (id)deviceDefaults;
- (void)deviceListChanged:(id)a0;
- (id)diffableHashWithContext:(id)a0;
- (id)inferredPlatform;
- (BOOL)isFBKPaired;
- (BOOL)isLikeDEDDevice:(id)a0;
- (BOOL)isVisibleToDED;
- (id)mostReliableDevice;
- (BOOL)needsPairing;
- (void)pairToFBK;
- (id)readyDevice;
- (void)removeFBKPairing;
- (id)transportsForDisplay;
- (void)updateStoredCopyIfNeeded;

@end
