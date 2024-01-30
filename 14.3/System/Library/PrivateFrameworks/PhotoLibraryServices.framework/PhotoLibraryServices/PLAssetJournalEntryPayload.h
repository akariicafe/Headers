@class NSArray, NSString, NSDictionary;

@interface PLAssetJournalEntryPayload : PLJournalEntryPayload {
    NSDictionary *_keywordUUIDRemapping;
}

@property (readonly, nonatomic) NSArray *resources;
@property (readonly, nonatomic) short savedAssetType;
@property (readonly, nonatomic) NSString *mediaGroupUUID;

+ (id)snapshotSortDescriptors;
+ (id)additionalEntityNames;
+ (BOOL)shouldPersistForChangedKeys:(id)a0 entityName:(id)a1;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (short)kind;
- (id)originalOrientation;
- (id)filename;
- (BOOL)hasAdjustments;
- (void).cxx_destruct;
- (id)uniformTypeIdentifier;
- (BOOL)isVideo;
- (id)latitude;
- (BOOL)isDefaultAdjustedSlomo;
- (id)hdrGain;
- (BOOL)isImage;
- (short)kindSubtype;
- (id)locationData;
- (id)highFrameRateState;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;
- (id)dateCreated;
- (void)setLocation:(id)a0;
- (id)initWithAdditionalAssetAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithAssetDescription:(id)a0 changedKeys:(id)a1;
- (id)initWithUnmanagedAdjustment:(id)a0 changedKeys:(id)a1;
- (id)initWithInternalResource:(id)a0 changedKeys:(id)a1;
- (id)initWithFileSystemBookmark:(id)a0 changedKeys:(id)a1;
- (id)initWithCloudMaster:(id)a0 payloadID:(id)a1 changedKeys:(id)a2;
- (id)initWithCloudMasterMediaMetadata:(id)a0 payloadID:(id)a1 changedKeys:(id)a2 modelProperties:(id)a3;
- (id)initWithExtendedAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithEditedIPTCAttributes:(id)a0 changedKeys:(id)a1;
- (id)insertAssetFromDataInManagedObjectContext:(id)a0 keywordUUIDRemapping:(id)a1 payloadAttributesToUpdate:(id)a2;
- (id)cloudMasterGUID;
- (id)originalResourceRelativePaths;
- (void)_fixXMPSidecarUTI;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (id)extendedAttributesLatitude;
- (id)extendedAttributesLongitude;
- (unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
- (id)_loadOriginalVideoMetadataWithPathManager:(id)a0 timezoneLookup:(id)a1;
- (void)_convertDepthStatesToDepthType;
- (void)_fixHDRGainZeroValueToNULL;
- (void)_fixOriginalAlternateImageOrientation;
- (void)_fixResourceTypeUnknownValues;
- (void)_fixLocationData;
- (void)_fixAdjustedAssetUTI;
- (id)adjustmentFormatVersion;
- (id)adjustmentFormatIdentifier;
- (id)directory;
- (BOOL)updatePayloadAttributes:(id)a0 withManagedObject:(id)a1 forPayloadProperty:(id)a2;
- (void)updateEncodableAttributes:(id)a0 fromPayloadAttributes:(id)a1 forPayloadProperty:(id)a2;
- (void)updatePayloadAttributes:(id)a0 withDecodedAttributes:(id)a1 forPayloadProperty:(id)a2;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)longitude;

@end
