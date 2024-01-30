@interface CNChangeHistoryEventFactory : NSObject

- (id)deleteGroupEventWithGroupIdentifier:(id)a0;
- (id)addMemberToGroupEventWithMember:(id)a0 group:(id)a1;
- (id)deleteContactEventWithContactIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;
- (id)preferredContactForNameEventWithPreferredContact:(id)a0 unifiedContact:(id)a1;
- (id)preferredContactForImageEventWithPreferredContact:(id)a0 unifiedContact:(id)a1;
- (id)dropEverythingEvent;
- (id)deleteGroupEventWithGroupIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;
- (id)addGroupEventWithGroup:(id)a0 containerIdentifier:(id)a1;
- (id)deleteContactEventWithContactIdentifier:(id)a0;
- (id)linkContactsEventWithFromContact:(id)a0 toContact:(id)a1;
- (id)updateGroupEventWithGroup:(id)a0;
- (id)differentMeCardEventWithContactIdentifier:(id)a0;
- (id)unlinkContactEventWithContact:(id)a0;
- (id)addSubgroupToGroupEventWithSubgroup:(id)a0 group:(id)a1;
- (id)addContactEventWithContact:(id)a0 containerIdentifier:(id)a1;
- (id)removeSubgroupFromGroupEventWithSubgroup:(id)a0 group:(id)a1;
- (id)updateContactEventWithContact:(id)a0;
- (id)removeMemberFromGroupEventWithMember:(id)a0 group:(id)a1;

@end
