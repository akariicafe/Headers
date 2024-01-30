@class REFeatureSet, NSString, NSURL, NSArray, RELocationManager, NSObject, REDataSourceLoader, RERelevanceProviderManagerLoader;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *engineQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (copy, nonatomic) NSURL *modelFileURL;
@property (copy, nonatomic) NSURL *baseModelFileURL;
@property (nonatomic) unsigned long long modelVersion;
@property (nonatomic) BOOL allowsUpdatingModelFile;
@property (copy, nonatomic) REDataSourceLoader *dataSourceLoader;
@property (copy, nonatomic) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader;
@property (nonatomic) unsigned long long trainingBehavior;
@property (nonatomic) unsigned long long modelStorageBehavior;
@property (retain, nonatomic) RELocationManager *locationManager;
@property (copy, nonatomic) REFeatureSet *primaryFeatures;
@property (nonatomic) BOOL wantsImmutableContent;
@property (copy, nonatomic) NSString *preferenceDomain;
@property (nonatomic) BOOL allowsRemoteTraining;
@property (nonatomic) BOOL wantsBackup;
@property (nonatomic) BOOL ignoreDeviceLockState;
@property (nonatomic) BOOL allowsDiagnosticExtension;
@property (retain, nonatomic) id<RERelevanceEngineMetricsRecorder> metricsRecorder;
@property (nonatomic) BOOL ignoresInstalledApplications;
@property (copy, nonatomic) NSArray *whitelistedDataSourceClassNames;
@property (nonatomic) BOOL disableAutomaticContentManagement;

+ (id)defaultConfiguration;
+ (id)sampleUpNextConfiguration;
+ (id)defaultUpNextConfiguration;

- (void)removeSectionAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLocationManager:(id)a0;
- (void)setObserverQueue:(id)a0;
- (void)setModelVersion:(unsigned long long)a0;
- (void)removeAllSections;
- (void)setEngineQueue:(id)a0;
- (void)setDataSourceLoader:(id)a0;
- (void)setIgnoresInstalledApplications:(BOOL)a0;
- (void)addInteractionWithDescriptor:(id)a0;
- (void)addSectionWithDescriptor:(id)a0;
- (void)removeAllInteractions;
- (void)setBaseModelFileURL:(id)a0;
- (void)setMetricsRecorder:(id)a0;
- (void)setModelFileURL:(id)a0;
- (void)setPrimaryFeatures:(id)a0;
- (void)setRelevanceProviderManagerLoader:(id)a0;
- (void)setTrainingBehavior:(unsigned long long)a0;
- (void)setWantsImmutableContent:(BOOL)a0;
- (void)setWantsBackup:(BOOL)a0;
- (long long)_indexOfInteractionWithName:(id)a0;
- (long long)_indexOfSectionWithName:(id)a0;
- (void)insertInteractionWithDescriptor:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertSectionWithDescriptor:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeInteractionAtIndex:(unsigned long long)a0;
- (void)removeSectionWithName:(id)a0;
- (void)setAllowsDiagnosticExtension:(BOOL)a0;
- (void)setAllowsRemoteTraining:(BOOL)a0;
- (void)setAllowsUpdatingModelFile:(BOOL)a0;
- (void)setDisableAutomaticContentManagement:(BOOL)a0;
- (void)setIgnoreDeviceLockState:(BOOL)a0;
- (void)setModelStorageBehavior:(unsigned long long)a0;
- (void)setPreferenceDomain:(id)a0;

@end
