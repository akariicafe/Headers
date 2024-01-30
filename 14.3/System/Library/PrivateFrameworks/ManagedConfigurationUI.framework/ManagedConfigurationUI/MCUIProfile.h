@class NSArray, MCProfile;

@interface MCUIProfile : NSObject

@property (nonatomic) BOOL showManagedPayloads;
@property (nonatomic) long long finalInstallationWarningStyle;
@property (readonly, nonatomic) MCProfile *profile;
@property (readonly, nonatomic) NSArray *availableElevatedPayloadInfoTypes;
@property (readonly, nonatomic) NSArray *accountSections;
@property (readonly, nonatomic) NSArray *managedAppSections;
@property (readonly, nonatomic) NSArray *managedBookSections;
@property (readonly, nonatomic) NSArray *moreDetailsSections;
@property (readonly, nonatomic) NSArray *restrictionSections;
@property (readonly, nonatomic) NSArray *payloadInfoSectionSummaries;

- (void).cxx_destruct;
- (void)_addObjectsOfClass:(Class)a0 fromArray:(id)a1 toArray:(id)a2;
- (id)_localizedPayloadSummaryByType:(id)a0;
- (void)dealloc;
- (BOOL)isMDMProfile;
- (long long)numberOfAccounts;
- (id)initWithProfile:(id)a0 managedPayloads:(BOOL)a1;
- (void)_profileListChanged:(id)a0;
- (BOOL)managesAppID:(id)a0;
- (void)setProfile:(id)a0 managedPayloads:(BOOL)a1;
- (void)_managedAppsChanged:(id)a0;
- (void)_managedBooksChanged:(id)a0;
- (void)reloadProfile:(id)a0;
- (BOOL)isInstalledMDMProfile;
- (id)_sortedPayloads:(id)a0;
- (void)_determineAvailableElevatedPayloadInfoTypes;
- (long long)_numberOfItemsInSectionsArray:(id)a0;
- (BOOL)managesBook:(id)a0;
- (long long)numberOfManagedApps;
- (long long)numberOfManagedBooks;
- (long long)numberOfRestrictions;

@end
