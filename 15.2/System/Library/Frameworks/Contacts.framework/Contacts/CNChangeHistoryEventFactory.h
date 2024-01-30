@interface CNChangeHistoryEventFactory : NSObject

- (id)updateContactEventWithContact:(id)a0 imagesChanged:(BOOL)a1;
- (id)addSubgroupToGroupEventWithSubgroup:(id)a0 group:(id)a1;
- (id)preferredContactForImageEventWithPreferredContact:(id)a0 unifiedContact:(id)a1;
- (id)differentMeCardEventWithContactIdentifier:(id)a0;
- (id)deleteContactEventWithContactIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;
- (id)deleteGroupEventWithGroupIdentifier:(id)a0;
- (id)updateContactEventWithContact:(id)a0;
- (id)preferredContactForNameEventWithPreferredContact:(id)a0 unifiedContact:(id)a1;
- (id)deleteGroupEventWithGroupIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;
- (id)addGroupEventWithGroup:(id)a0 containerIdentifier:(id)a1;
- (id)removeSubgroupFromGroupEventWithSubgroup:(id)a0 group:(id)a1;
- (id)updateGroupEventWithGroup:(id)a0;
- (id)linkContactsEventWithFromContact:(id)a0 toContact:(id)a1 unifiedContact:(id)a2;
- (id)unlinkContactEventWithContact:(id)a0;
- (id)addContactEventWithContact:(id)a0 containerIdentifier:(id)a1;
- (id)dropEverythingEvent;
- (id)deleteContactEventWithContactIdentifier:(id)a0;
- (id)addMemberToGroupEventWithMember:(id)a0 group:(id)a1;
- (id)removeMemberFromGroupEventWithMember:(id)a0 group:(id)a1;

@end
