@class NSString, COMeshNode;

@interface HMDCoordinationLocalElectionMeshNode : NSObject <HMDLocalElectionMeshNode>

@property (readonly, weak) COMeshNode *meshNode;
@property (retain) NSString *idsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMeshNode:(id)a0;

@end
