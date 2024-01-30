@class NSArray;

@interface MRAVClusterOutputDevice : MRAVConcreteOutputDevice

@property (readonly, nonatomic) NSArray *memberOutputDevices;

- (BOOL)isLocalDevice;
- (id)uid;
- (unsigned int)deviceType;
- (id)clusterComposition;
- (id)initWithDevices:(id)a0 sourceInfo:(id)a1;
- (BOOL)anyDeviceSupportsMultiplayer;
- (void).cxx_destruct;
- (id)initWithPrimaryOutputDevice:(id)a0 members:(id)a1 sourceInfo:(id)a2;
- (id)primaryID;
- (unsigned int)deviceSubtype;

@end
