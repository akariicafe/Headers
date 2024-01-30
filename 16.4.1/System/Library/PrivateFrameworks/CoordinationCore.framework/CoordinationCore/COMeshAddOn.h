@class COMeshController;

@interface COMeshAddOn : NSObject

@property (weak, nonatomic) COMeshController *meshController;

- (void)didStopMeshController:(id)a0;
- (void).cxx_destruct;
- (void)didChangeNodesForMeshController:(id)a0;
- (void)meshController:(id)a0 didTransitionToState:(unsigned long long)a1;
- (void)didAddToMeshController:(id)a0;
- (void)didRemoveFromMeshController:(id)a0;
- (void)didStartMeshController:(id)a0;
- (void)meshController:(id)a0 willTransitionToState:(unsigned long long)a1;
- (void)willAddToMeshController:(id)a0;
- (void)willRemoveFromMeshController:(id)a0;
- (void)willStartMeshController:(id)a0;
- (void)willStopMeshController:(id)a0;

@end
