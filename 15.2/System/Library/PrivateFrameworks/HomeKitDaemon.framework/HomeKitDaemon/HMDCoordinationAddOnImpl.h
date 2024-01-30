@protocol HMDLocalElectionMeshAddOnDelegate;

@interface HMDCoordinationAddOnImpl : COMeshAddOn

@property (weak, nonatomic) id<HMDLocalElectionMeshAddOnDelegate> delegate;

- (void)meshController:(id)a0 didTransitionToState:(unsigned long long)a1;
- (void)didChangeNodesForMeshController:(id)a0;
- (void).cxx_destruct;

@end
