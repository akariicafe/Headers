@class NSString, NSMutableArray;

@interface WiFiP2PAWDLPeerCollector : NSObject <WiFiP2PAWDLPeerQueryXPCDelegate>

@property (retain, nonatomic) NSMutableArray *peers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addedPeerWithInformation:(id)a0 completion:(id /* block */)a1;

@end
