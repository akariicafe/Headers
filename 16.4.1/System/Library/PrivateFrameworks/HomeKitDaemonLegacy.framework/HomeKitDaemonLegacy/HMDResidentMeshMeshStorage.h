@class HMDResidentMesh, NSMutableDictionary, NSDictionary, NSMutableSet, HMDResidentDevice;

@interface HMDResidentMeshMeshStorage : HMFObject

@property (weak, nonatomic) HMDResidentMesh *owner;
@property (readonly, nonatomic) HMDResidentDevice *residentDevice;
@property (copy, nonatomic) NSDictionary *metrics;
@property (retain, nonatomic) NSMutableSet *accessoryUUIDs;
@property (nonatomic) unsigned long long generationCount;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality;
@property (nonatomic) unsigned long long nestedStatusRequests;

- (void).cxx_destruct;
- (void)_requestStatus;
- (id)initWithResidentDevice:(id)a0 owner:(id)a1;

@end
