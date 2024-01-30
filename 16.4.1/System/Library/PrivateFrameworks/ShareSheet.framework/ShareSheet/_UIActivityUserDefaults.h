@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject

@property (copy, nonatomic) NSString *activityDefaultsKey;
@property (retain, nonatomic) NSUserDefaults *underlyingUserDefaults;

+ (void)_migrateUserActivityOrderforKey:(id)a0 userDefaults:(id)a1 defaultOrder:(id)a2;
+ (id)builtinActivityOrder;
+ (void)migrateUserActivityOrderIfNecessary;
+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)a0 someSortedActivityIdentifiers:(id)a1;

- (void).cxx_destruct;
- (void)removeActivityTypeFromDefaults:(id)a0;
- (void)_userEditedActivityDefaults;
- (id)activitiesBySortingActivities:(id)a0 byIdentifierWithDefaultActivityIdentifierOrdering:(id)a1;
- (id)activitiesOrderedByUserActivityOrderForActivities:(id)a0;
- (id)activityIdentifiersInUserOrder;
- (BOOL)activityIsHidden:(id)a0;
- (id)applicationExtensionForActivity:(id)a0;
- (BOOL)canHideActivity:(id)a0;
- (BOOL)hasUserEditedActivityOrder;
- (id)identifierForActivity:(id)a0;
- (id)initWithUnderlyingUserDefaults:(id)a0 activityDefaultsKey:(id)a1;
- (id)migrateSortOrderIfNeededForBuiltInActivityType:(id)a0 activityIdentifierOrdering:(id)a1;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)a0;
- (void)postActivityUserDefaultsDidChangeNotification;
- (void)setActivity:(id)a0 asHidden:(BOOL)a1;
- (void)setActivityIdentifiersInUserOrder:(id)a0;
- (void)updateUserActivityOrderWithOrderedPartialActivities:(id)a0;

@end
