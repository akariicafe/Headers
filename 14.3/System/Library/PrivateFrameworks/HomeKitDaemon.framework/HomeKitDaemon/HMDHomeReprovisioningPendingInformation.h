@class NSUUID, HMDAccessoryNetworkCredential;

@interface HMDHomeReprovisioningPendingInformation : NSObject

@property (readonly) NSUUID *messageIdentifier;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;

- (void).cxx_destruct;
- (id)initWithMessageUUID:(id)a0 networkCredential:(id)a1;

@end
