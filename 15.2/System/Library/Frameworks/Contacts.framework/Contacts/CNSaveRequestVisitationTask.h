@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

@interface CNSaveRequestVisitationTask : CNTask

@property (readonly) CNSaveRequest *saveRequest;
@property (readonly) id<CNChangeHistoryEventVisitorPrivate> visitor;
@property (readonly) CNChangeHistoryEventFactory *factory;

- (id)run:(id *)a0;
- (void).cxx_destruct;
- (void)sendAddedGroupEvents;
- (id)initWithSaveRequest:(id)a0 visitor:(id)a1 factory:(id)a2;
- (void)sendAddedContactEvents;
- (void)sendUpdatedContactEvents;
- (void)sendDeletedContactEvents;
- (void)sendUpdatedGroupEvents;
- (void)sendDeletedGroupEvents;
- (void)sendAddMemberToGroupEvents;
- (void)sendRemoveMemberFromGroupEvents;
- (void)sendAddSubgroupToGroupEvents;
- (void)sendRemoveSubgroupFromGroupEvents;
- (void)sendLinkContactsEvents;
- (void)sendUnlinkContactEvents;
- (void)sendPreferredContactForNameEvents;
- (void)sendPreferredContactForImageEvents;
- (void)sendDifferentMeCardEvent;

@end
