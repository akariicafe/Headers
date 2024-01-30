@class NSString;
@protocol PRRangingClientProtocol;

@interface PRRangingClientExportedObject : NSObject <PRRangingClientProtocol, PRAidedRangingClientProtocol>

@property (weak, nonatomic) id<PRRangingClientProtocol> rangingClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveNewSolutions:(id)a0;
- (id)initWithRangingClient:(id)a0;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)a0;
- (void)rangingServiceDidUpdateState:(unsigned long long)a0 cause:(long long)a1;
- (void)remoteDevice:(id)a0 didChangeState:(long long)a1;
- (void)sendDataToPeers:(id)a0;

@end
