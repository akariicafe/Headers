@class NSString, NSDictionary, NSArray, CKConversation;
@protocol CKDetailsContactsManagerDelegate;

@interface CKDetailsContactsManager : NSObject

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) NSString *serviceAvailabilityKey;
@property (retain, nonatomic) NSDictionary *facetimeIDStatuses;
@property (retain, nonatomic) NSDictionary *facetimeAudioIDStatuses;
@property (retain, nonatomic) NSDictionary *screenSharingIDSStatuses;
@property (copy, nonatomic) NSArray *contactsViewModels;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (weak, nonatomic) id<CKDetailsContactsManagerDelegate> delegate;

- (void)startCommunicationForViewModel:(id)a0 action:(unsigned long long)a1 address:(id)a2;
- (void)sendEmail;
- (void)_handleLocationChanged:(id)a0;
- (void)beginFacetimeCallWithVideo:(BOOL)a0;
- (void)_handleAddressBookChange:(id)a0;
- (void).cxx_destruct;
- (void)setPreferredCallService:(unsigned long long)a0 forID:(id)a1;
- (void)_callButtonPressedWithVideoEnabled:(BOOL)a0;
- (void)_conversationJoinStateDidChange:(id)a0;
- (id)initWithConversation:(id)a0 delegate:(id)a1;
- (void)_handleConversationRecipientsDidChange:(id)a0;
- (void)startCommunicationForEntity:(id)a0 action:(unsigned long long)a1 address:(id)a2 usePreferredRouteIfAvailable:(BOOL)a3;
- (id)callMenuForEntity:(id)a0;
- (void)_handleMultiwayStateChanged:(id)a0;
- (BOOL)__im_ff_isExpanseEnabled;
- (id)conversationContextMenuConfigForEntity:(id)a0 allowConversationRemoval:(BOOL)a1;
- (void)_handleConversationPendingRecipientsDidChange:(id)a0;
- (void)_updateViewModelsWithDelay:(BOOL)a0;
- (void)_refreshIDSStatusWithCompletion:(id /* block */)a0;
- (void)_performUpdateViewModels;
- (void)dealloc;
- (id)callActionsForEntity:(id)a0;
- (BOOL)_isHandleActiveParticipantInTUConversation:(id)a0;
- (BOOL)_showMessageButtonForEntity:(id)a0;
- (BOOL)_showFaceTimeVideoButtonForEntity:(id)a0;
- (BOOL)_showPhoneButtonForEntity:(id)a0;
- (id)contextMenuForEntity:(id)a0 atom:(id)a1;
- (BOOL)showScreenSharingButtonForEntity:(id)a0;
- (id)contextMenuForUnknownRecipient:(id)a0 atom:(id)a1;
- (id)conversationContextMenuForUnknownEntity:(id)a0 allowConversationRemoval:(BOOL)a1 showUnknownContactActionInPopover:(BOOL)a2 unknownContactActionHandler:(id /* block */)a3;
- (unsigned long long)preferredCallServiceForID:(id)a0;
- (BOOL)isFaceTimeAudioAvailableForEntity:(id)a0;
- (void)callableAddressesForEntity:(id)a0 withResult:(id /* block */)a1;
- (BOOL)hasPreferredCallServiceForEntity:(id)a0;
- (void)_startMessageWithEntity:(id)a0;
- (void)_startCommunicationForEntity:(id)a0 usePreferredRouteIfAvailable:(BOOL)a1;
- (void)_startFacetimeCommunicationForEntity:(id)a0 audioOnly:(BOOL)a1;
- (void)_startCallWithEntity:(id)a0 phoneAddress:(id)a1;
- (void)_shareMyScreenWithEntity:(id)a0;
- (void)_inviteEntityToShareTheirScreen:(id)a0;
- (long long)_facetimeIDStatusForEntity:(id)a0;
- (BOOL)isTelephonyCallAvailableForEntity:(id)a0;
- (BOOL)_hasLinkedTelephoneNumbersForEntity:(id)a0;
- (long long)_screenSharingStatusForEntity:(id)a0;
- (id)conversationContextMenuForEntity:(id)a0 allowConversationRemoval:(BOOL)a1;
- (BOOL)_preferredRoutesDisabledViaServerBag;
- (id)_preferredCallServiceToIDMap;
- (void)_setPreferredCallServiceToIDMap:(id)a0;
- (void)startCommunicationForEntity:(id)a0 action:(unsigned long long)a1 address:(id)a2;
- (BOOL)shouldAlwaysShowCallMenuForEntity:(id)a0;
- (BOOL)isFaceTimeVideoAvailableForEntity:(id)a0;
- (long long)_facetimeAudioIDStatusForEntity:(id)a0;
- (void)startAudioCommunicationUsingPreferredRouteIfAvailable:(BOOL)a0;

@end
