@class NSArray, CTXPCServiceSubscriptionInfo;

@interface IMCTXPCServiceSubscriptionInfo : NSObject

@property (retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) NSArray *phoneNumbersOfActiveSubscriptions;

- (id)subscriptions;
- (id)__im_preferredSubscriptionContext;
- (id)__im_switchSubscriptionContextFromPhoneNumber:(id)a0 simID:(id)a1;
- (id)_senderIdentityManager;
- (id)__im_subscriptionContextForPhoneNumber:(id)a0;
- (id)__im_contactPreferredSubscriptionContextForChatHandleIDs:(id)a0;
- (id)allSubscriptions;
- (id)__im_subscriptionContextForPhoneNumberOrDefault:(id)a0;
- (BOOL)__im_containsPhoneNumber:(id)a0;
- (id)__im_phoneNumberForSlotID:(long long)a0;
- (id)__im_subscriptionContextForForSimID:(id)a0;
- (id)__im_subscriptionContextOrDefaultForForSimID:(id)a0 phoneNumber:(id)a1;
- (id)__im_labelForPhoneNumber:(id)a0 simID:(id)a1;
- (id)__im_subscriptionContextForForSimID:(id)a0 phoneNumber:(id)a1;
- (id)__im_subscriptionContextOrDefaultForForSlotID:(long long)a0;
- (id)__im_subscriptionsWithMMSSupport;
- (id)initWithSubscriptionInfo:(id)a0;
- (id)__im_switchSubscriptionContextFromSubscriptionContext:(id)a0;
- (id)__im_phoneNumberForSlotIDOrDefault:(long long)a0;
- (id)preferredOrDefaultSubscriptionContext;
- (BOOL)__im_hasMultipleSubscriptions;
- (id)__im_subscriptionContextForSenderIdentity:(id)a0;
- (id)description;
- (BOOL)__im_onlyHasActiveSlots;
- (long long)__imSlotIDSForPhoneNumber:(id)a0;
- (id)__im_subscriptionContextForForSlotID:(long long)a0;
- (void).cxx_destruct;
- (id)__imSIMIDForSubscriptionSlot:(long long)a0;

@end
