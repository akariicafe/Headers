@class HMAddAccessoryRequest, NSString, HMAccessoryOwnershipToken, HMSetupAccessoryPayload, HMSetupAccessoryBrowsingRequest;

@interface HMAccessorySetupPayload : NSObject

@property (retain) HMSetupAccessoryPayload *internalSetupPayload;
@property (readonly, nonatomic) HMAddAccessoryRequest *addRequest;
@property (readonly, nonatomic) HMAccessoryOwnershipToken *ownershipToken;
@property (retain) HMSetupAccessoryBrowsingRequest *accessoryBrowsingRequest;
@property (copy) NSString *suggestedRoomName;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 ownershipToken:(id)a1;
- (BOOL)_parseURLForBrowsingRequest:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithAddRequest:(id)a0 url:(id)a1 ownershipToken:(id)a2;

@end
