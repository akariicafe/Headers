@class NSArray;

@interface MRAVClusterOutputDevice : MRAVConcreteOutputDevice

@property (readonly, nonatomic) NSArray *memberOutputDevices;

- (id)clusterComposition;
- (unsigned int)deviceType;
- (id)uid;
- (unsigned int)deviceSubtype;
- (void).cxx_destruct;
- (id)groupID;
- (id)primaryID;
- (id)initWithPrimaryOutputDevice:(id)a0 members:(id)a1 sourceInfo:(id)a2;
- (id)initWithDevices:(id)a0 sourceInfo:(id)a1;

@end
