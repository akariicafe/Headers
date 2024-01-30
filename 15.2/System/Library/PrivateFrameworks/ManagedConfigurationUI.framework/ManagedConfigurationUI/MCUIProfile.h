@class NSString, NSArray, MCProfile;

@interface MCUIProfile : NSObject

@property (nonatomic) BOOL showManagedPayloads;
@property (nonatomic) long long finalInstallationWarningStyle;
@property (readonly, nonatomic) MCProfile *profile;
@property (copy, nonatomic) NSString *managedAppleID;
@property (readonly, nonatomic) NSArray *elevatedPayloadTypes;
@property (readonly, nonatomic) NSArray *accountSections;
@property (readonly, nonatomic) NSArray *managedAppSections;
@property (readonly, nonatomic) NSArray *managedBookSections;
@property (readonly, nonatomic) NSArray *moreDetailsSections;
@property (readonly, nonatomic) NSArray *restrictionSections;
@property (readonly, nonatomic) NSArray *byodInfoSections;
@property (readonly, nonatomic) NSArray *payloadInfoSectionSummaries;

- (long long)numberOfAccounts;
- (void)_addObjectsOfClass:(Class)a0 fromArray:(id)a1 toArray:(id)a2;
- (id)_localizedPayloadSummaryByType:(id)a0;
- (BOOL)isMDMProfile;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProfile:(id)a0 managedPayloads:(BOOL)a1;
- (BOOL)managesAppID:(id)a0;
- (void)setProfile:(id)a0 managedPayloads:(BOOL)a1;
- (void)_profilesUpdated:(id)a0;
- (void)_managedAppsChanged:(id)a0;
- (void)_managedBooksChanged:(id)a0;
- (void)reloadProfile:(id)a0;
- (BOOL)isInstalledMDMProfile;
- (id)_sortedPayloads:(id)a0;
- (id)_warningTextFromPayload:(id)a0;
- (id)_signedByStringFromProfile:(id)a0;
- (void)_determineAvailableElevatedPayloadInfoTypes;
- (long long)_numberOfItemsInSectionsArray:(id)a0;
- (BOOL)managesBook:(id)a0;
- (long long)numberOfManagedApps;
- (long long)numberOfManagedBooks;
- (long long)numberOfRestrictions;

@end
