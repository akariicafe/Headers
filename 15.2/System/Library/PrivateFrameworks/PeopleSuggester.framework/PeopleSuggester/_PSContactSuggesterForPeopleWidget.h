@class NSMutableDictionary, NSMutableSet;

@interface _PSContactSuggesterForPeopleWidget : NSObject

@property (retain, nonatomic) NSMutableDictionary *candidateContacts;
@property (retain, nonatomic) NSMutableSet *priorityFamilyMembers;
@property (retain, nonatomic) NSMutableSet *nonpriorityFamilyMembers;

- (void).cxx_destruct;
- (id)init;
- (id)contactKeysToFetch;
- (id)contactSuggestionsWithMaxSuggestions:(long long)a0 excludeContactsWithIdentifiers:(id)a1;
- (id)allEmailAndPhoneNumberHandlesForContact:(id)a0;
- (void)processFamilyMember:(id)a0 toFillContactArray:(id)a1;
- (id)familyMemberContactHandles;
- (id)iCloudFamilyMembers;
- (id)interactionBasedRecommendedContacts;
- (id)favoritedContacts;
- (id)familyRecommendedContacts;

@end
