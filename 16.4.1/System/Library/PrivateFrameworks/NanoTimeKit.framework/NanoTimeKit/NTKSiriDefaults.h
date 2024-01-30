@class NSSet, NSString, NTKFaceCollection;

@interface NTKSiriDefaults : NSObject <NTKFaceCollectionObserver> {
    NTKFaceCollection *_faceCollection;
}

@property (nonatomic) BOOL watchHasMigratedAvailableDataSources;
@property (retain, nonatomic) NSSet *phoneThirdPartyDataSources;
@property (retain, nonatomic) NSSet *watchThirdPartyDataSources;
@property (readonly, nonatomic) BOOL hasMigratedDisabledDataSources;
@property (retain, nonatomic) NSSet *disabledDataSources;
@property (readonly, nonatomic) BOOL isUpNextFaceCurrentlyActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_disabledDataSourcesDidChange;
- (void)_fetchNewFaceCollection;
- (void)_synchronizeDefaultsForKeys:(id)a0;
- (void)_thirdPartyDataSourcesDidChange;
- (void)faceCollectionDidLoad:(id)a0;
- (void)_activeDeviceDidChange:(id)a0;
- (BOOL)hasMigratedDataSources;
- (id)init;
- (void)migrateIfNecessary;
- (void).cxx_destruct;
- (id)_domainAccesor;

@end
