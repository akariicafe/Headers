@class HMAccessoryOwnershipToken, HMSetupAccessoryPayload;

@interface HMAccessorySetupPayload : NSObject

@property (readonly) HMSetupAccessoryPayload *internalSetupPayload;
@property (readonly, copy) HMAccessoryOwnershipToken *ownershipToken;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 ownershipToken:(id)a1;

@end
