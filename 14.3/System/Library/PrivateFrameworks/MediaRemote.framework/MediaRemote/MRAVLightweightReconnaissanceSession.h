@interface MRAVLightweightReconnaissanceSession : NSObject

- (void)searchForOutputDeviceUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchForLogicalOutputDeviceUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsForCompanionWithTimeout:(double)a0 reason:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)searchEndpointsForOutputDeviceUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsForLeaderOutputDeviceUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsForGroupUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;

@end
