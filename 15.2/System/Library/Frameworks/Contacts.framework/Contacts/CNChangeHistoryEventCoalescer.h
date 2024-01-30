@class NSArray, NSString, NSMutableArray, CNMutableOrderedDictionary;

@interface CNChangeHistoryEventCoalescer : NSObject <CNChangeHistoryEventVisitorPrivate> {
    NSMutableArray *_controlEvents;
    CNMutableOrderedDictionary *_addedContacts;
    CNMutableOrderedDictionary *_updatedContacts;
    CNMutableOrderedDictionary *_deletedContacts;
    CNMutableOrderedDictionary *_addedGroups;
    CNMutableOrderedDictionary *_updatedGroups;
    CNMutableOrderedDictionary *_deletedGroups;
    NSMutableArray *_contactLinkingEvents;
    NSMutableArray *_groupMembershipEvents;
    NSMutableArray *_otherContactEvents;
}

@property (readonly) NSArray *events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coalesceEvents:(id)a0;
+ (id)coalescingLog;

- (void)visitDropEverythingEvent:(id)a0;
- (void)visitPreferredContactForNameEvent:(id)a0;
- (void)visitUnlinkContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddSubgroupToGroupEvent:(id)a0;
- (void)visitDeleteGroupEvent:(id)a0;
- (void)visitAddGroupEvent:(id)a0;
- (void)visitRemoveSubgroupFromGroupEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void).cxx_destruct;
- (void)visitLinkContactsEvent:(id)a0;
- (id)init;
- (void)visitUpdateGroupEvent:(id)a0;
- (void)visitDifferentMeCardEvent:(id)a0;
- (void)visitRemoveMemberFromGroupEvent:(id)a0;
- (void)visitPreferredContactForImageEvent:(id)a0;
- (void)visitAddMemberToGroupEvent:(id)a0;

@end
