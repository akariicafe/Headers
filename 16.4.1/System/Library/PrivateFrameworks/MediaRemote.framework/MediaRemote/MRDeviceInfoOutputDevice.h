@class MRDeviceInfo;

@interface MRDeviceInfoOutputDevice : MRAVOutputDevice

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;

- (unsigned int)deviceSubtype;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canAccessiCloudMusicLibrary;
- (id)logicalDeviceID;
- (BOOL)isGroupable;
- (BOOL)isRemoteControllable;
- (BOOL)supportsMultiplayer;
- (BOOL)canAccessAppleMusic;
- (BOOL)isLocalDevice;
- (long long)hostDeviceClass;
- (id)uid;
- (id)modelID;
- (id)groupID;
- (id)avOutputDevice;
- (unsigned int)deviceType;
- (void).cxx_destruct;
- (id)name;
- (id)initWithDeviceInfo:(id)a0;
- (BOOL)shouldBeLocallyHosted;

@end
