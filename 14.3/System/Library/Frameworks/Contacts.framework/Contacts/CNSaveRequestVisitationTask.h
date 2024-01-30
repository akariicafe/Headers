@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

@interface CNSaveRequestVisitationTask : CNTask

@property (readonly) CNSaveRequest *saveRequest;
@property (readonly) id<CNChangeHistoryEventVisitorPrivate> visitor;
@property (readonly) CNChangeHistoryEventFactory *factory;

- (void).cxx_destruct;
- (id)initWithSaveRequest:(id)a0 visitor:(id)a1 factory:(id)a2;
- (void)sendAddedContactEvents;
- (void)sendUpdatedContactEvents;
- (void)sendDeletedContactEvents;
- (void)sendAddedGroupEvents;
- (void)sendUpdatedGroupEvents;
- (void)sendDeletedGroupEvents;
- (void)sendAddMemberToGroupEvents;
- (void)sendRemoveMemberFromGroupEvents;
- (void)sendAddSubgroupToGroupEvents;
- (void)sendLinkContactsEvents;
- (void)sendRemoveSubgroupFromGroupEvents;
- (void)sendUnlinkContactEvents;
- (void)sendDifferentMeCardEvent;
- (void)sendPreferredContactForNameEvents;
- (void)sendPreferredContactForImageEvents;
- (id)run:(id *)a0;

@end
