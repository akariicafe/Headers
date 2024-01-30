@class NSString, NSArray, CRKASMRosterUpdater, CRKASMCertificateIngestor, CRKASMWorldBuildOperation, CRKClassKitChangeNotifier, CRKASMRosterProviderEnvironment;
@protocol CRKASMUserFetching, CRKASMRoster;

@interface CRKASMConcreteRosterProvider : NSObject <CRKClassKitChangeNotifierDelegate, CRKASMRosterProviding>

@property (retain, nonatomic) id<CRKASMRoster> roster;
@property (nonatomic, getter=isPopulated) BOOL populated;
@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSArray *locationsWithManagePermissions;
@property (readonly, nonatomic) CRKASMCertificateIngestor *certificateIngestor;
@property (readonly, nonatomic) CRKClassKitChangeNotifier *classKitChangeNotifier;
@property (retain, nonatomic) CRKASMWorldBuildOperation *worldBuildOperation;
@property (readonly, nonatomic) CRKASMRosterUpdater *rosterUpdater;
@property (readonly, nonatomic) CRKASMRosterProviderEnvironment *environment;
@property (readonly, nonatomic) id<CRKASMUserFetching> userFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)studentRosterProvider;
+ (id)instructorRosterProvider;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)refresh;
- (void)dealloc;
- (void)createCourseWithProperties:(id)a0 completion:(id /* block */)a1;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (BOOL)ingestCertificates:(id)a0 forTrustedUserIdentifier:(id)a1 error:(id *)a2;
- (void)removeCourseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)startNewWorldBuild;
- (void)worldBuildDidFinish:(id)a0;
- (void)processFinishedWorldBuild:(id)a0;
- (void)logDurationOfOperation:(id)a0;
- (void)updateRoster:(id)a0 outTrustedPersonIDsChanged:(BOOL *)a1;
- (void)updateManageableLocations:(id)a0;
- (void)notifierDidObserveClassKitChange:(id)a0;
- (id)studentDirectoryForLocationIDs:(id)a0;
- (id)instructorDirectoryForLocationIDs:(id)a0;

@end
