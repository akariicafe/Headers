@class NSPersistentContainer, NSMutableDictionary, NSDictionary, DRSDampeningConfiguration, NSObject, DRSDampeningEnforcementSettings;
@protocol OS_dispatch_queue;

@interface DRSDampeningManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) DRSDampeningConfiguration *defaultSignatureConfiguration;
@property (readonly, nonatomic) DRSDampeningEnforcementSettings *enforcementSettings;
@property (nonatomic) unsigned long long totalCap;
@property (readonly, nonatomic) NSMutableDictionary *teamDampeningConfigDict;
@property (readonly, nonatomic) NSDictionary *resourceDampeningConfigDict;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;

+ (id)_entityName;
+ (BOOL)removeExistingDampeningManagerStateFromManagedObjectContext:(id)a0 errorOut:(id *)a1;
+ (BOOL)passesAcceptanceRate:(double)a0;
+ (id)defaultResourceConfigurations:(BOOL)a0 isSeed:(BOOL)a1 isCarrier:(BOOL)a2 platform:(unsigned char)a3;
+ (id)defaultTeamConfigurations:(BOOL)a0 isSeed:(BOOL)a1 isCarrier:(BOOL)a2 platform:(unsigned char)a3;
+ (id)defaultTeamConfigurationsForCurrentDevice;
+ (id)_nandTeamConfiguration:(BOOL)a0 isSeed:(BOOL)a1 isCarrier:(BOOL)a2 platform:(unsigned char)a3;
+ (id)_hangTracerTeamConfiguration:(BOOL)a0 isSeed:(BOOL)a1 isCarrier:(BOOL)a2 platform:(unsigned char)a3;
+ (id)_sentryTeamConfiguration:(BOOL)a0 isSeed:(BOOL)a1 isCarrier:(BOOL)a2 platform:(unsigned char)a3;
+ (id)_defaultTailspinConfiguration:(BOOL)a0 isSeed:(BOOL)a1 isCarrier:(BOOL)a2 platform:(unsigned char)a3;
+ (id)defaultResourceConfigurationsForCurrentDevice;
+ (id)_ON_MOC_QUEUE_existingMOFromContext:(id)a0 errorOut:(id *)a1;
+ (id)defaultTeamConfigurationForTeamForCurrentDevice:(id)a0;
+ (id)defaultTeamConfigurationForTeam:(id)a0 isInternal:(BOOL)a1 isSeed:(BOOL)a2 isCarrier:(BOOL)a3 platform:(unsigned char)a4;
+ (id)dampeningManagerFromPersistentContainer:(id)a0 deleteBadState:(BOOL)a1 errorOut:(id *)a2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithPersistentContainer:(id)a0;
- (BOOL)saveToPersistentContainerWithErrorOut:(id *)a0;
- (unsigned long long)dampeningOutcomeForRequest:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (id)initWithPersistentContainer:(id)a0 enforcementSettings:(id)a1 defaultSignatureConfiguration:(id)a2 totalCap:(unsigned long long)a3 teamDampeningConfigDict:(id)a4 resourceDampeningConfigDict:(id)a5;
- (id)_predicateForUndampenedRequestsMatchingSignatureOfRequest:(id)a0 afterDate:(id)a1;
- (BOOL)_hasRequestsRecordCountGreaterThanOrEqualToThreshold:(unsigned long long)a0 matchingPredicate:(id)a1 inContext:(id)a2 filterToObjectsMatchingClassOfRequest:(id)a3;
- (BOOL)_request:(id)a0 passesHysteresis:(double)a1 countCap:(unsigned long long)a2 usesSignature:(BOOL)a3 usesRequestClass:(BOOL)a4 managedObjectContext:(id)a5;
- (double)_24HoursHysteresis;
- (id)dampeningConfigurationForResource:(id)a0;
- (id)_resourceConfigurationForRequest:(id)a0;
- (BOOL)_passesResourceHysteresis:(id)a0 config:(id)a1 managedObjectContext:(id)a2;
- (BOOL)_passesResourceCap:(id)a0 config:(id)a1 managedObjectContext:(id)a2;
- (BOOL)_passesResourceRandomDownsampling:(id)a0 config:(id)a1;
- (id)dampeningConfigurationForRequestSignature:(id)a0;
- (BOOL)_passesSignatureHysteresis:(id)a0 config:(id)a1 managedObjectContext:(id)a2;
- (BOOL)_passesSignatureCap:(id)a0 config:(id)a1 managedObjectContext:(id)a2;
- (BOOL)_passesSignatureRandomDownsampling:(id)a0 config:(id)a1;
- (BOOL)_passesTotalCap:(id)a0 managedObjectContext:(id)a1;
- (id)dampeningConfigurationForTeamID:(id)a0 issueCategory:(id)a1;
- (id)_ON_MOC_QUEUE_initWith:(id)a0 persistentContainer:(id)a1;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0;
- (BOOL)isEqualToDampeningManager:(id)a0;
- (id)initWithIsInternal:(BOOL)a0 isSeed:(BOOL)a1 isCarrier:(BOOL)a2 platform:(unsigned char)a3;

@end
