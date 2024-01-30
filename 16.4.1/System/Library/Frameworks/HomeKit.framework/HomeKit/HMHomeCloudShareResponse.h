@class CKShareParticipant, HMUser, HMUserCloudShareClientInfo;

@interface HMHomeCloudShareResponse : NSObject

@property (readonly) CKShareParticipant *participant;
@property (readonly) HMUser *ownerUser;
@property (readonly) HMUserCloudShareClientInfo *clientInfo;

- (void).cxx_destruct;
- (id)initWithOwnerUser:(id)a0 pariticipant:(id)a1 clientInfo:(id)a2;

@end
