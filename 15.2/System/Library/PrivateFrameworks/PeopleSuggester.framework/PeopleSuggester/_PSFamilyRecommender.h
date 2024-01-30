@class CNContactStore, _CDInteractionStore, HKHealthStore, _PSContactResolver, NSObject;
@protocol OS_dispatch_queue;

@interface _PSFamilyRecommender : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) _PSContactResolver *contactResolver;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (id)init;
- (id)contactKeysToFetch;
- (id)familyRecommendationSuggestionsForShareSheet;
- (id)personRelationshipVocabularyByLocaleDictionary;
- (id)currentFamily;
- (id)currentFamilyExcludingMe:(id)a0;
- (id)contactIdsFromContactRelationsAndNamesUsingMe:(id)a0;
- (id)contactIdsFromEmergencyContacts;
- (void)logFeedbackForFamilyRecommenderCallHasRecommendations:(BOOL)a0;
- (id)handleAndBundleIdDictionaryForFamilyRecipientContact:(id)a0 lookBackDays:(long long)a1;
- (id)familyRecipientsForShareSheet;
- (id)fetchAllContactIdsFromContactStore:(id)a0;
- (id)nonFamilyRelations;
- (id)relationshipRegularExpressionForRelationship;
- (BOOL)regexMatchForRegex:(id)a0 string:(id)a1;
- (unsigned long long)indexToInsertDate:(id)a0 array:(id)a1;
- (id)familyRecommendations;

@end
