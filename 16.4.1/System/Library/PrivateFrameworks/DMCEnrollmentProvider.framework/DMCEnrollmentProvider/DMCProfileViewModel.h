@class NSString, NSArray, MCProfile;

@interface DMCProfileViewModel : NSObject

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

+ (id)trustTextForProfile:(id)a0 outIsTrusted:(BOOL *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfAccounts;
- (id)_localizedPayloadSummaryByType:(id)a0;
- (void)_addObjectsOfClass:(Class)a0 fromArray:(id)a1 toArray:(id)a2;
- (BOOL)isMDMProfile;
- (id)initWithProfile:(id)a0 managedPayloads:(BOOL)a1;
- (void)_determineAvailableElevatedPayloadInfoTypes;
- (void)_managedAppsChanged:(id)a0;
- (void)_managedBooksChanged:(id)a0;
- (long long)_numberOfItemsInSectionsArray:(id)a0;
- (void)_profilesUpdated:(id)a0;
- (id)_signedByStringFromProfile:(id)a0;
- (id)_sortedPayloads:(id)a0;
- (id)_warningTextFromPayload:(id)a0;
- (BOOL)isInstalledMDMProfile;
- (BOOL)managesAppID:(id)a0;
- (BOOL)managesBook:(id)a0;
- (long long)numberOfManagedApps;
- (long long)numberOfManagedBooks;
- (long long)numberOfRestrictions;
- (void)reloadProfile:(id)a0;
- (void)setProfile:(id)a0 managedPayloads:(BOOL)a1;

@end
