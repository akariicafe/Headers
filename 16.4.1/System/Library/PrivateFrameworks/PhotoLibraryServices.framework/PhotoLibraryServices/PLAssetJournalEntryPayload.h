@class NSArray, NSString, NSDictionary;

@interface PLAssetJournalEntryPayload : PLManagedObjectJournalEntryPayload {
    NSDictionary *_keywordUUIDRemapping;
}

@property (readonly, nonatomic) NSArray *resources;
@property (readonly, nonatomic) short savedAssetType;
@property (readonly, nonatomic) NSString *mediaGroupUUID;

+ (unsigned int)payloadVersion;
+ (id)modelProperties;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)snapshotSortDescriptors;

- (BOOL)isVideo;
- (unsigned short)bundleScope;
- (id)directory;
- (id)filename;
- (BOOL)hasAdjustments;
- (BOOL)isImage;
- (id)dateCreated;
- (id)longitude;
- (id)latitude;
- (short)kind;
- (id)uniformTypeIdentifier;
- (unsigned short)playbackVariation;
- (void)setKind:(short)a0;
- (id)hdrGain;
- (void)setLocation:(id)a0;
- (void).cxx_destruct;
- (unsigned short)playbackStyle;
- (id)adjustmentFormatIdentifier;
- (id)adjustmentFormatVersion;
- (short)kindSubtype;
- (id)locationData;
- (id)originalUniformTypeIdentifier;
- (void)setPlaybackStyle:(unsigned short)a0;
- (id)cloudMasterGUID;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (void)_convertCustomRenderedValueToHDRType;
- (void)_convertDepthStatesToDepthType;
- (void)_filterNonPersistedResources;
- (void)_fixAdjustedAssetUTI;
- (void)_fixHDRGainZeroValueToNULL;
- (void)_fixLocationData;
- (void)_fixOriginalAlternateImageOrientation;
- (void)_fixResourceTypeUnknownValues;
- (void)_fixXMPSidecarUTI;
- (id)_loadOriginalVideoMetadataWithPathManager:(id)a0 timezoneLookup:(id)a1;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
- (id)extendedAttributesLatitude;
- (id)extendedAttributesLongitude;
- (id)highFrameRateState;
- (id)initWithAdditionalAssetAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithAssetDescription:(id)a0 changedKeys:(id)a1;
- (id)initWithCloudMaster:(id)a0 payloadID:(id)a1 changedKeys:(id)a2;
- (id)initWithCloudMasterMediaMetadata:(id)a0 payloadID:(id)a1 changedKeys:(id)a2 modelProperties:(id)a3;
- (id)initWithEditedIPTCAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithExtendedAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithInternalResource:(id)a0 filesystemBookmark:(id)a1 changedKeys:(id)a2;
- (id)initWithUnmanagedAdjustment:(id)a0 changedKeys:(id)a1;
- (id)insertAssetFromDataInManagedObjectContext:(id)a0 keywordUUIDRemapping:(id)a1 rawPayloadAttributesToUpdate:(id)a2;
- (BOOL)isDefaultAdjustedSlomo;
- (void)mergePayload:(id)a0;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;
- (id)originalOrientation;
- (id)originalResourceRelativePathsWithPathManager:(id)a0;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
