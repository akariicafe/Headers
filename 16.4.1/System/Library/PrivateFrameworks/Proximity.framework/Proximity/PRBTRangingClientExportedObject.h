@class NSString;
@protocol PRBTRangingClientProtocol;

@interface PRBTRangingClientExportedObject : NSObject <PRBTRangingClientProtocol>

@property (weak, nonatomic) id<PRBTRangingClientProtocol> rangingClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;
- (void)didConnectDevice:(id)a0 error:(id)a1;
- (void)didFetchTxPower:(id)a0 fromDevice:(id)a1 withError:(id)a2;
- (void)didReceiveNewBTRSSI:(id)a0;
- (void)didStartRangingOnDevice:(id)a0 withError:(id)a1;
- (void)didStopOwnerRangingOnDevice:(id)a0 withError:(id)a1;
- (id)initWithRangingClient:(id)a0;

@end
