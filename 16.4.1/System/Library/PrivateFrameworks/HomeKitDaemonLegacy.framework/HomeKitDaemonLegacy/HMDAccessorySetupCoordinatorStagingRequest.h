@class NSUUID, NSError, NSMutableArray, HMFMessage;

@interface HMDAccessorySetupCoordinatorStagingRequest : NSObject

@property (readonly, copy) NSUUID *UUID;
@property (retain, nonatomic) HMFMessage *pendingRequestMessage;
@property (copy, nonatomic) id /* block */ confirmDeviceCredentialCompletionHandler;
@property (copy, nonatomic) id /* block */ selectWiFiNetworkHandler;
@property (copy, nonatomic) id /* block */ selectThreadNetworkHandler;
@property (retain, nonatomic) NSMutableArray *pendingResponsePayloads;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;

@end
