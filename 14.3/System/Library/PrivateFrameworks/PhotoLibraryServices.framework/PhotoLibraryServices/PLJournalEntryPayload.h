@class NSSet, NSString, NSMutableDictionary, NSMutableSet;
@protocol PLJournalEntryPayloadID;

@interface PLJournalEntryPayload : NSObject <PLJournalEntryPayload, PLJournalEntryPayloadValidation> {
    NSMutableDictionary *_payloadAttributes;
    NSMutableSet *_nilProperties;
    id<PLJournalEntryPayloadID> _payloadID;
    unsigned int _payloadVersion;
}

@property (readonly, nonatomic) id<PLJournalEntryPayloadID> payloadID;
@property (readonly, nonatomic) unsigned int payloadVersion;
@property (readonly, nonatomic) NSSet *nilProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relationshipKeyPathsForPrefetching;
+ (id)snapshotSortDescriptors;
+ (void)validatePayloadPropertiesForManagedObjectModel:(id)a0;
+ (id)additionalEntityNames;
+ (BOOL)shouldPersistForChangedKeys:(id)a0 entityName:(id)a1;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (void)loadModelPropertiesDescription:(id)a0 parentPayloadProperty:(id)a1;
+ (id)_populateRelationshipKeyPathsForPrefetching:(id)a0 currentKeyPath:(id)a1 usingModelProperties:(id)a2;
+ (id)relationshipKeyPathsForPrefetchingWithModelProperties:(id)a0 outUUIDPropertyName:(id *)a1;
+ (void)_validateModelProperties:(id)a0 nonPersistedModelProperties:(id)a1 forEntityDescription:(id)a2;
+ (id)sortedObjectsToAddWithUUIDs:(id)a0 uuidKey:(id)a1 andExistingObjects:(id)a2 fetchBlock:(id /* block */)a3;
+ (id)payloadWithData:(id)a0 forPayloadID:(id)a1 version:(unsigned int)a2 andNilProperties:(id)a3 error:(id *)a4;
+ (id)fetchRelationshipPropertyValuesForRelationshipName:(id)a0 fromManagedObject:(id)a1 usingPayloadProperty:(id)a2;

- (void).cxx_destruct;
- (BOOL)comparePayloadToObjectDictionary:(id)a0 usingModelProperties:(id)a1 errorDescriptions:(id)a2;
- (BOOL)decodePayloadData:(id)a0 error:(id *)a1;
- (id)initWithPayloadID:(id)a0 payloadVersion:(unsigned int)a1 nilProperties:(id)a2;
- (id)initWithPayloadID:(id)a0 payloadVersion:(unsigned int)a1 nilProperties:(id)a2 managedObject:(id)a3 changedKeys:(id)a4 modelProperties:(id)a5;
- (void)setPayloadAttribute:(id)a0 forKey:(id)a1;
- (id)payloadAttributeForKey:(id)a0;
- (id)_payloadAttributesListForSubRelationshipProperty:(id)a0 withManagedObjects:(id)a1;
- (void)_applyNilPropertiesWithModelProperties:(id)a0;
- (void)_applyModelProperties:(id)a0 toPayloadAttributes:(id)a1 forManagedObject:(id)a2 changedKeys:(id)a3;
- (void)_updateEncodableAttributes:(id)a0 fromPayloadAttributes:(id)a1 forModelProperties:(id)a2;
- (void)_updatePayloadAttributes:(id)a0 withDecodedAttributes:(id)a1 forModelProperties:(id)a2;
- (void)migrateDecodedAttributes:(id)a0;
- (id)descriptionForEntry:(id)a0 withBuilder:(id)a1;
- (void)_applyPayloadToManagedObject:(id)a0 forModelProperties:(id)a1 payloadAttributesToUpdate:(id)a2;
- (unsigned int)latestVersionForKey:(id)a0 inUpdatePayloads:(id)a1;
- (void)addNilPropertiesToBuilder:(id)a0;
- (void)addAttributesDescriptionToBuilder:(id)a0;
- (id)orderedSetForUUIDEncodedData:(id)a0;
- (BOOL)_comparePayloadAttributes:(id)a0 toObjectDictionary:(id)a1 currentKeyPath:(id)a2 usingModelProperties:(id)a3 errorDescriptions:(id)a4;
- (void)applyPayloadToManagedObject:(id)a0 payloadAttributesToUpdate:(id)a1;
- (id)initWithManagedObject:(id)a0 changedKeys:(id)a1;
- (void)_resolveRelationshipsInObjectDictionary:(id)a0 atKeyPath:(id)a1 forPayloadProperty:(id)a2;
- (void)mergePayload:(id)a0;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;
- (id)UUIDStringForData:(id)a0;
- (id)UUIDDataForString:(id)a0;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (id)descriptionWithBuilder:(id)a0;
- (id)descriptionForEntry:(id)a0;
- (id)prettyDescriptionForEntry:(id)a0 indent:(long long)a1;
- (id)payloadDataWithError:(id *)a0;
- (BOOL)updatePayloadAttributes:(id)a0 withManagedObject:(id)a1 forPayloadProperty:(id)a2;
- (void)updateEncodableAttributes:(id)a0 fromPayloadAttributes:(id)a1 forPayloadProperty:(id)a2;
- (void)updatePayloadAttributes:(id)a0 withDecodedAttributes:(id)a1 forPayloadProperty:(id)a2;
- (id)setForUUIDEncodedData:(id)a0;
- (id)encodedDataForUUIDs:(id)a0 count:(unsigned long long)a1;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;

@end
