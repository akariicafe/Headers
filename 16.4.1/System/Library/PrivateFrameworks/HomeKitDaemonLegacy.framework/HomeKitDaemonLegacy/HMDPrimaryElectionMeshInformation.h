@class HMDResidentDevice;

@interface HMDPrimaryElectionMeshInformation : NSObject

@property (readonly, nonatomic) HMDResidentDevice *responder;
@property (readonly, nonatomic) HMDResidentDevice *leader;
@property (readonly, nonatomic) HMDResidentDevice *primary;
@property (readonly, nonatomic) unsigned long long reachableIPAccessories;
@property (readonly, nonatomic) unsigned long long residentsInMesh;

+ (id)meshInformationFromMessagePayload:(id)a0 home:(id)a1;
+ (id)meshInformationWithMeshController:(id)a0 home:(id)a1;

- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithResponder:(id)a0 leader:(id)a1 primary:(id)a2 reachableIPAccessories:(unsigned long long)a3 residentsInMesh:(unsigned long long)a4;
- (id)toMessagePayload;

@end
