@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

@interface CNSaveRequestVisitationTask : CNTask

@property (readonly) CNSaveRequest *saveRequest;
@property (readonly) id<CNChangeHistoryEventVisitorPrivate> visitor;
@property (readonly) CNChangeHistoryEventFactory *factory;

- (id)run:(id *)a0;
- (void).cxx_destruct;
- (void)sendRemoveMemberFromGroupEvents;
- (id)initWithSaveRequest:(id)a0 visitor:(id)a1 factory:(id)a2;
- (void)sendAddMemberToGroupEvents;
- (void)sendAddSubgroupToGroupEvents;
- (void)sendAddedContactEvents;
- (void)sendAddedGroupEvents;
- (void)sendDeletedContactEvents;
- (void)sendDeletedGroupEvents;
- (void)sendDifferentMeCardEvent;
- (void)sendLinkContactsEvents;
- (void)sendPreferredContactForImageEvents;
- (void)sendPreferredContactForNameEvents;
- (void)sendRemoveSubgroupFromGroupEvents;
- (void)sendUnlinkContactEvents;
- (void)sendUpdatedContactEvents;
- (void)sendUpdatedGroupEvents;

@end
