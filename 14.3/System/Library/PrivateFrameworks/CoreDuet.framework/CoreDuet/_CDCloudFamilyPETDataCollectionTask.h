@class NSDate, NSString, _CDCloudFamilyPETDataCollectionSession, HKHealthStore, NSMutableDictionary, _CDInteractionStore, CNContactStore, NSObject;
@protocol OS_xpc_object;

@interface _CDCloudFamilyPETDataCollectionTask : NSObject <HMHomeManagerDelegate>

@property (readonly, copy, nonatomic) NSString *dataDirectory;
@property (readonly, copy, nonatomic) NSString *sessionPath;
@property (readonly, copy, nonatomic) NSDate *collectionDate;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) NSMutableDictionary *videoBundleIDLookup;
@property (retain, nonatomic) _CDCloudFamilyPETDataCollectionSession *session;
@property (readonly, nonatomic) double samplingRate;
@property (readonly, nonatomic) unsigned long long maxBatches;
@property (readonly, nonatomic) unsigned long long daysPerBatch;
@property (nonatomic) BOOL selectedForDataCollection;
@property (nonatomic) BOOL deleteSessionOnCleanup;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStorage:(id)a0 contactStore:(id)a1 healthStore:(id)a2 activity:(id)a3 sessionPath:(id)a4 dataDirectory:(id)a5 collectionDate:(id)a6 samplingRate:(double)a7 maxBatches:(unsigned long long)a8 daysPerBatch:(unsigned long long)a9;
- (id)allEmailAndPhoneNumberHandlesForContact:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)execute;
- (void)_execute;
- (id)allAirDropInteractionsFromStore:(id)a0 fetchLimit:(unsigned long long)a1;
- (id)labelMembers;
- (id)contactsInHome;
- (id)contactsInContactStore;
- (id)contactKeysToFetch;
- (id)contactRelationsUsingMe:(id)a0;
- (id)contactsEmergencyFamily;
- (id)contactsEmergency;
- (id)photosPeople;
- (id)contactParentsUsingRegexNamesUsingContacts:(id)a0;
- (id)contactIdsInFmfFollowingMyLocation;
- (id)contactIdsInFmfSharingLocationWithMe;
- (id)airDropPeople;
- (id)airDropPeopleAtHome;
- (id)avgOfAllCallsUsingManager:(id)a0;
- (id)contactFamilyRelationForContact:(id)a0 contactRelations:(id)a1 me:(id)a2;
- (id)aggregateInteractionDataUsingStore:(id)a0 contact:(id)a1 callHistoryManager:(id)a2 avgCallDur:(id)a3;
- (id)generalContactRelationForContact:(id)a0;
- (id)contactEmergencyForContact:(id)a0 contactEmergency:(id)a1;
- (id)contactFamilyEmergencyForContact:(id)a0 contactFamilyEmergency:(id)a1;
- (id)contactParentsForContact:(id)a0 contactParents:(id)a1;
- (id)contactsInHomeForContact:(id)a0 homeContacts:(id)a1;
- (id)contactFamilyNameForContact:(id)a0 me:(id)a1;
- (BOOL)nonfamilyRelationExistsInSet:(id)a0;
- (id)personRelationshipVocabularyByLocaleDictionary;
- (id)queryContactsForGivenName:(id)a0;
- (id)relationCheckerForRelation:(id)a0;
- (id)fetchEmergencyContacts;
- (id)relationshipRegularExpressionForRelationship;
- (BOOL)regexMatchForRegex:(id)a0 string:(id)a1;
- (unsigned long long)indexToInsertDate:(id)a0 array:(id)a1;
- (id)contactRelationForContact:(id)a0;
- (id)resolveRelationWithContactGivenRelationWithMe:(id)a0;
- (id)contactRelationFromEmergencyContact;
- (id)messagesFeaturesFromInteractions:(id)a0;
- (id)thirdPartyMessageFeaturesFromresults:(id)a0;
- (id)initWithActivity:(id)a0;
- (id)chHandlesForContact:(id)a0;
- (id)callFeaturesFromInteractions:(id)a0 avgCallLength:(double)a1 contact:(id)a2;

@end
