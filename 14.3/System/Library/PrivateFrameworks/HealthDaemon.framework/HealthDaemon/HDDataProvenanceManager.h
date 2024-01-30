@class HDContributorReference, NSString, HDProfile, NSLock, NSNumber, HDDatabaseValueCache;

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject> {
    HDProfile *_profile;
    NSString *_localSourceVersion;
    NSLock *_propertyLock;
    NSNumber *_propertyLock_localSourceID;
    NSNumber *_propertyLock_localDeviceID;
    NSNumber *_propertyLock_deviceNoneID;
    HDContributorReference *_propertyLock_noneContributorReference;
    HDContributorReference *_propertyLock_primaryUserContributorReference;
    _Atomic BOOL _defaultsLoaded;
}

@property (retain, nonatomic) HDDatabaseValueCache *persistentIDsByProvenanceKey;
@property (retain, nonatomic) HDDatabaseValueCache *originProvenanceByPersistentID;
@property (copy, nonatomic) NSString *localSystemBuild;
@property (copy, nonatomic) NSString *localProductType;
@property (readonly, copy, nonatomic) NSNumber *localSourceID;
@property (readonly, copy, nonatomic) NSNumber *localDeviceID;
@property (readonly, copy, nonatomic) NSNumber *deviceNoneID;
@property (readonly, copy, nonatomic) HDContributorReference *noneContributorReference;
@property (readonly, copy, nonatomic) HDContributorReference *primaryUserContributorReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)checkDefaultsLoaded;
- (id)defaultLocalDataProvenance;
- (id)_localTimeZoneName;
- (id)provenanceEntityForProvenance:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)originProvenanceForPersistentID:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)_localDataProvenanceWithSourceID:(id)a0 sourceVersion:(id)a1 deviceID:(id)a2 contributorReference:(id)a3;
- (id)provenanceEntityForProvenance:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void)setDeviceNoneID:(id)a0;
- (id)defaultLocalDataProvenanceWithDeviceEntity:(id)a0;
- (id)diagnosticDescription;
- (void)setLocalSourceID:(id)a0;
- (void)_loadDefaults;
- (id)localDataProvenanceForSourceEntity:(id)a0 version:(id)a1 deviceEntity:(id)a2;
- (void)setNoneContributorReference:(id)a0;
- (void)setLocalDeviceID:(id)a0;
- (void)setPrimaryUserContributorReference:(id)a0;
- (id)_lookupOrInsertProvenance:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
