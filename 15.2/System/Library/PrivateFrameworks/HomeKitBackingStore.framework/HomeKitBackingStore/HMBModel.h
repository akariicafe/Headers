@class NSUUID, NSString, NSArray, HMBModelContainer, NSSet, NSMutableDictionary, NSDictionary, HMFVersion;

@interface HMBModel : HMFObject <HMFLogging, HMBModelProperties>

@property (class, readonly, nonatomic) BOOL hmbShouldLogPrivateInformation;
@property (class, readonly, nonatomic) NSSet *hmbExternalProperties;
@property (class, readonly, nonatomic) NSSet *hmbExternalRecordFields;
@property (class, readonly, nonatomic) NSUUID *hmbSchemaHashRoot;
@property (class, readonly, nonatomic) BOOL hmbExcludeFromCloudStorage;
@property (class, readonly, nonatomic) NSString *hmbExternalRecordType;
@property (class, readonly, nonatomic) NSDictionary *hmbProperties;
@property (class, readonly, copy, nonatomic) NSSet *hmbPropertyNames;
@property (class, readonly, nonatomic) NSArray *hmbQueries;
@property (class, readonly, nonatomic) NSSet *hmbModelClassesWithQueries;
@property (class, readonly, nonatomic) HMFVersion *hmbReadOnlyBefore;
@property (class, readonly, nonatomic) Class hmbGenericRepresentation;

@property (weak, nonatomic) HMBModelContainer *hmbModelContainer;
@property (retain, nonatomic) HMFVersion *hmbDataVersion;
@property (retain, nonatomic) NSUUID *hmbModelID;
@property (retain, nonatomic) NSUUID *hmbParentModelID;
@property (retain, nonatomic) NSString *hmbType;
@property (retain, nonatomic) NSSet *hmbUnavailableProperties;
@property (retain, nonatomic) NSSet *hmbReadOnlyProperties;
@property (nonatomic) unsigned long long hmbRecordRow;
@property (nonatomic) BOOL hmbExternallyFetched;
@property (readonly, copy, nonatomic) NSSet *hmbSetExternalProperties;
@property (readonly, copy, nonatomic) NSSet *hmbSetExternalRecordFields;
@property (retain, nonatomic) NSMutableDictionary *hmbReserved;
@property (readonly, nonatomic) NSString *hmbCanonicalType;
@property (readonly, nonatomic) NSSet *hmbSetProperties;
@property (readonly, nonatomic) HMFVersion *hmbContainerDataVersion;
@property (readonly, nonatomic) NSString *hmbDescription;
@property (readonly, nonatomic) BOOL hmbIsModelReadOnly;
@property (readonly, nonatomic) BOOL hmbIsModelGenericRepresentation;
@property (retain, nonatomic) HMFVersion *hmbMinimumSupportedVersion;
@property (readonly, nonatomic) BOOL hmbIgnoreModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)logCategory;
+ (id)hmbMutableModelClassesWithQueries;
+ (void)hmbResetModelsWithQueries;
+ (void)hmbPrepareQueries;
+ (BOOL)propertyDiffersFrom:(id)a0 to:(id)a1;
+ (id)formattedStringForValue:(id)a0;

- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModelID:(id)a0 parentModelID:(id)a1;
- (void)hmbSetProperty:(id)a0 named:(id)a1;
- (void)hmbUnsetPropertyNamed:(id)a0;
- (id)hmbDefaultValueForPropertyNamed:(id)a0;
- (id)hmbPropertyNamed:(id)a0 isSet:(BOOL *)a1;
- (id)hmbPropertyNamed:(id)a0;
- (BOOL)hmbPropertyIsAvailable:(id)a0;
- (BOOL)hmbPropertyWasSet:(id)a0;
- (BOOL)hmbPropertyIsReadOnly:(id)a0;
- (id)populateModelWithDictionary:(id)a0 fromStorageLocation:(unsigned long long)a1 using:(id)a2;
- (void)hmbAssociateWithContainer:(id)a0;
- (BOOL)_validateType:(id)a0 error:(id *)a1;
- (id)validateType:(id)a0 path:(id)a1;
- (id)hmbPrepareForStorageLocation:(unsigned long long)a0;
- (id)prepareForStorageLocation:(unsigned long long)a0 using:(id)a1 updatedModelIDs:(id)a2 error:(id *)a3;
- (BOOL)hmbValidForStorage:(id)a0;
- (id)hmbModelByMergingFromModel:(id)a0 isFromCloud:(BOOL)a1 error:(id *)a2;
- (void)hmbMergeSetPropertiesFromModel:(id)a0;
- (BOOL)hmbIsDifferentFromModel:(id)a0 differingFields:(id *)a1;
- (BOOL)hmbCanonicalTypeInferred;
- (BOOL)hmbPropertyIsExternal:(id)a0;
- (void)dumpDebug:(id)a0;
- (void)dumpDebug;

@end
