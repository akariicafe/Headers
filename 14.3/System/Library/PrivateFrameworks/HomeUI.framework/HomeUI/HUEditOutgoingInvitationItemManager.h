@class HMOutgoingHomeInvitation, NSString, HFStaticItem;

@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager>

@property (retain, nonatomic) HFStaticItem *inviteAgainItem;
@property (retain, nonatomic) HFStaticItem *removeItem;
@property (readonly, nonatomic) HMOutgoingHomeInvitation *outgoingInvitation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
