@class NSUUID, NSNumber, NSData;

@interface HMDAccessoryNetworkCredential : NSObject

@property (readonly) NSUUID *networkRouterUUID;
@property (readonly) NSNumber *clientIdentifier;
@property (readonly) NSData *wiFiPSK;

- (void).cxx_destruct;
- (id)initWithNetworkRouterUUID:(id)a0 clientIdentifier:(id)a1 wiFiPSK:(id)a2;

@end
