@class NSString;
@protocol CNChangeHistoryEventVisitor;

@interface CNSafeChangeHistoryEventVisitorWrapper : NSObject <CNChangeHistoryEventVisitorPrivate>

@property (readonly, nonatomic) id<CNChangeHistoryEventVisitor> visitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitUpdateContactEvent:(id)a0;
- (void)visitDeleteGroupEvent:(id)a0;
- (void)visitDifferentMeCardEvent:(id)a0;
- (void)visitAddMemberToGroupEvent:(id)a0;
- (void)visitLinkContactsEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitRemoveMemberFromGroupEvent:(id)a0;
- (void)visitUpdateGroupEvent:(id)a0;
- (void)visitAddSubgroupToGroupEvent:(id)a0;
- (void)visitUnlinkContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitPreferredContactForNameEvent:(id)a0;
- (void)visitAddGroupEvent:(id)a0;
- (void)visitRemoveSubgroupFromGroupEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void).cxx_destruct;
- (void)visitPreferredContactForImageEvent:(id)a0;
- (id)initWithChangeHistoryEventVisitor:(id)a0;

@end
