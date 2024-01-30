@class NSArray, NSString, NSDictionary;

@interface PLAssetJournalEntryPayload : PLJournalEntryPayload {
    NSDictionary *_keywordUUIDRemapping;
}

@property (readonly, nonatomic) NSArray *resources;
@property (readonly, nonatomic) short savedAssetType;
@property (readonly, nonatomic) NSString *mediaGroupUUID;

+ (id)snapshotSortDescriptors;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)longitude;
- (id)latitude;
- (id)directory;
- (id)filename;
- (id)uniformTypeIdentifier;
- (short)kindSubtype;
- (BOOL)isImage;
- (id)highFrameRateState;
- (short)kind;
- (unsigned short)bundleScope;
- (id)adjustmentFormatVersion;
- (id)adjustmentFormatIdentifier;
- (BOOL)isVideo;
- (void).cxx_destruct;
- (id)originalOrientation;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)locationData;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;
- (id)initWithAdditionalAssetAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithAssetDescription:(id)a0 changedKeys:(id)a1;
- (id)initWithUnmanagedAdjustment:(id)a0 changedKeys:(id)a1;
- (id)initWithInternalResource:(id)a0 filesystemBookmark:(id)a1 changedKeys:(id)a2;
- (id)dateCreated;
- (id)initWithCloudMaster:(id)a0 payloadID:(id)a1 changedKeys:(id)a2;
- (id)initWithCloudMasterMediaMetadata:(id)a0 payloadID:(id)a1 changedKeys:(id)a2 modelProperties:(id)a3;
- (id)initWithExtendedAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithEditedIPTCAttributes:(id)a0 changedKeys:(id)a1;
- (id)insertAssetFromDataInManagedObjectContext:(id)a0 keywordUUIDRemapping:(id)a1 payloadAttributesToUpdate:(id)a2;
- (id)cloudMasterGUID;
- (id)extendedAttributesLatitude;
- (id)originalResourceRelativePathsWithPathManager:(id)a0;
- (id)extendedAttributesLongitude;
- (unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
- (id)_loadOriginalVideoMetadataWithPathManager:(id)a0 timezoneLookup:(id)a1;
- (void)_filterNonPersistedResources;
- (void)_copyAssetDescriptionToAccessibilityDescription;
- (void)_convertCustomRenderedValueToHDRType;
- (void)_convertDepthStatesToDepthType;
- (id)hdrGain;
- (void)_fixHDRGainZeroValueToNULL;
- (void)_fixOriginalAlternateImageOrientation;
- (void)_fixResourceTypeUnknownValues;
- (void)_fixXMPSidecarUTI;
- (void)_fixLocationData;
- (void)_fixAdjustedAssetUTI;
- (BOOL)hasAdjustments;
- (void)mergePayload:(id)a0;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (void)setLocation:(id)a0;
- (BOOL)isDefaultAdjustedSlomo;

@end
