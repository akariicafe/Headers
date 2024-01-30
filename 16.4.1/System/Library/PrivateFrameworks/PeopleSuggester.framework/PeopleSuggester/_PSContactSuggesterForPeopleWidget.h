@class _PASLock, NSMutableSet;

@interface _PSContactSuggesterForPeopleWidget : NSObject

@property (retain, nonatomic) _PASLock *candidateContacts;
@property (retain, nonatomic) NSMutableSet *priorityFamilyMembers;
@property (retain, nonatomic) NSMutableSet *nonpriorityFamilyMembers;

- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsWithIdentifiers:(id)a1;
- (id)init;
- (id)contactKeysToFetch;
- (void).cxx_destruct;
- (id)allEmailAndPhoneNumberHandlesForContact:(id)a0;
- (id)familyMemberContactHandles;
- (id)familyRecommendedContacts;
- (id)favoritedContacts;
- (id)iCloudFamilyMembers;
- (id)interactionBasedRecommendedContacts;
- (void)processFamilyMember:(id)a0 toFillContactArray:(id)a1;

@end
