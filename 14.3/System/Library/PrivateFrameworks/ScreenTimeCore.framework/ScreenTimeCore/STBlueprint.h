@class NSDate, NSString, NSArray, STBlueprintSchedule, NSSet, NSData, NSDateComponents, STCoreOrganization, STBlueprintUsageLimit;

@interface STBlueprint : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject, STVersionVectorable>

@property (class, readonly, copy) NSArray *defaultAlwaysAllowBundleIDs;
@property (class, readonly, copy) NSDateComponents *defaultStartTime;
@property (class, readonly, copy) NSDateComponents *defaultEndTime;
@property (class, readonly) NSString *serializableClassName;

@property (getter=isDowntimeEnabled) BOOL downtimeEnabled;
@property (readonly, copy) NSString *downtimeScheduleText;
@property (getter=isUsageLimitEnabled) BOOL usageLimitEnabled;
@property (readonly, copy) NSString *limitDisplayName;
@property (readonly, copy) NSString *limitScheduleText;
@property (nonatomic) BOOL isTombstoned;
@property (nonatomic) BOOL invertUsageLimit;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL limitEnabled;
@property (copy, nonatomic) NSDate *expiration;
@property (copy, nonatomic) NSDate *minimumInstallationDate;
@property (retain, nonatomic) NSSet *users;
@property (retain, nonatomic) STBlueprintSchedule *schedule;
@property (retain, nonatomic) STBlueprintUsageLimit *usageLimit;
@property (retain, nonatomic) NSSet *configurations;
@property (retain, nonatomic) STCoreOrganization *organization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *versionVector;
@property (nonatomic) BOOL isDirty;

+ (BOOL)saveDowntimeForUser:(id)a0 startTime:(id)a1 endTime:(id)a2 scheduleByWeekdayIndex:(id)a3 enabled:(BOOL)a4 behaviorType:(unsigned long long)a5 error:(id *)a6;
+ (BOOL)deleteUsageLimitWithIdentifier:(id)a0 user:(id)a1 managedObjectContext:(id)a2 error:(id *)a3;
+ (id)createBlueprintWithType:(id)a0 user:(id)a1;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (void)_addWebDomains:(id)a0 toItemNames:(id)a1 remainingItems:(unsigned long long)a2 totalCount:(unsigned long long)a3 completionHandler:(id /* block */)a4;
+ (id)fetchRequestMatchingOrphanedBlueprints;
+ (id)displayNameForUsageLimitWithCategoryIdentifiers:(id)a0 bundleIdentifiers:(id)a1 webDomains:(id)a2;
+ (id)fetchResultsRequestsForChangesToBlueprintsForUserWithDSID:(id)a0;
+ (BOOL)saveUsageLimitWithIdentifier:(id)a0 user:(id)a1 bundleIdentifiers:(id)a2 webDomains:(id)a3 categoryIdentifiers:(id)a4 dailyBudgetLimit:(double)a5 budgetLimitByWeekday:(id)a6 enabled:(BOOL)a7 behaviorType:(unsigned long long)a8 error:(id *)a9;
+ (BOOL)saveAlwaysAllowListForUser:(id)a0 withBundleIDs:(id)a1 error:(id *)a2;
+ (void)_createDisplayNameWithItemNames:(id)a0 itemCount:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (id)keyPathsForValuesAffectingDowntimeScheduleText;
+ (id)_getDisplayNameAndAddCategories:(id)a0 toItemNames:(id)a1 remainingItems:(unsigned long long *)a2;
+ (id)simpleScheduleTimeRangeWithStartTimeComponents:(id)a0 endTimeComponents:(id)a1;
+ (id)fetchRequestMatchingExpiredBlueprints;
+ (id)_fetchRequestMatchingBlueprintsForUserWithDSID:(id)a0;
+ (BOOL)deleteManagedUserBlueprintForUser:(id)a0 error:(id *)a1;
+ (id)keyPathsForValuesAffectingLimitDisplayName;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)a0 ofType:(id)a1;
+ (id)keyPathsForValuesAffectingLimitScheduleText;
+ (void)fetchDisplayNameForUsageLimitWithCategoryIdentifiers:(id)a0 bundleIdentifiers:(id)a1 webDomains:(id)a2 completionHandler:(id /* block */)a3;
+ (BOOL)saveManagedUserBlueprintForUser:(id)a0 error:(id *)a1;
+ (id)scheduleTextWithLocale:(id)a0 weekdayScheduleComparator:(id /* block */)a1 scheduleTimeGetter:(id /* block */)a2;
+ (id)customScheduleTimeRangeWithLocale:(id)a0 startTimeComponents:(id)a1 endTimeComponents:(id)a2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)a0 fromOrganization:(id)a1;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)a0 ofType:(id)a1 withIdentifier:(id)a2 fromOrganization:(id)a3;
+ (id)blueprintIdentifierForUser:(id)a0;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)a0 ofType:(id)a1 fromOrganization:(id)a2;
+ (id)fetchRequestMatchingUnexpiredOneMoreMinuteBlueprints;
+ (id)fetchResultsRequestsForChangesToBlueprints;

- (void)tombstone;
- (BOOL)permitWebFilterURL:(id)a0 pageTitle:(id)a1 error:(id *)a2;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (void)didChangeValueForKey:(id)a0;
- (id)dictionaryRepresentation;
- (id)computeUniqueIdentifier;
- (id)declarationsWithError:(id *)a0;
- (void)migrateToVersion2CategoriesIfNeeded;
- (void)setStartTime:(id)a0 endTime:(id)a1;
- (void)setStartTime:(id)a0 endTime:(id)a1 forDay:(unsigned long long)a2;
- (void)disableDowntimeForDay:(unsigned long long)a0;
- (id)_webFilterBlacklistStringsForURL:(id)a0;

@end
