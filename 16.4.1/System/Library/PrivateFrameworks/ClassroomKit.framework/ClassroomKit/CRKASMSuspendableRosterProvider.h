@class NSArray, NSString, NSObject;
@protocol CRKASMRoster, CRKASMUserFetching, CRKASMRosterProviding;

@interface CRKASMSuspendableRosterProvider : NSObject <CRKASMUserFetching, CRKASMUserDirectory, CRKASMUserDirectoryIterator, CRKASMRosterProviding>

@property (readonly, nonatomic) id /* block */ generator;
@property (retain, nonatomic) NSObject<CRKASMRosterProviding> *underlyingRosterProvider;
@property (retain, nonatomic) id<CRKASMRoster> roster;
@property (nonatomic, getter=isPopulated) BOOL populated;
@property (copy, nonatomic) NSArray *locationsWithManagePermissions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CRKASMUserFetching> userFetcher;

- (void)refresh;
- (void)suspend;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithGenerator:(id /* block */)a0;
- (id)observedKeyPaths;
- (id)studentDirectoryForLocationIDs:(id)a0;
- (void)stopObservingUnderlyingProvider;
- (void)createCourseWithProperties:(id)a0 completion:(id /* block */)a1;
- (void)fetchASMUsersWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)fetchNextUsersWithCompletion:(id /* block */)a0;
- (BOOL)hasRosterProvider;
- (BOOL)ingestCertificates:(id)a0 forTrustedUserIdentifier:(id)a1 error:(id *)a2;
- (id)instructorDirectoryForLocationIDs:(id)a0;
- (id)iteratorForSearchString:(id)a0 sortingGivenNameFirst:(BOOL)a1 pageSize:(long long)a2;
- (void)latchDefaultValues;
- (id)noRosterProviderError;
- (void)removeCourseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)startObservingUnderlyingProvider;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 completion:(id /* block */)a2;

@end
