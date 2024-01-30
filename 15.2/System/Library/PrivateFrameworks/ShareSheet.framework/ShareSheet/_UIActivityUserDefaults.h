@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject

@property (copy, nonatomic) NSString *activityDefaultsKey;
@property (retain, nonatomic) NSUserDefaults *underlyingUserDefaults;

+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)a0 someSortedActivityIdentifiers:(id)a1;
+ (void)_migrateUserActivityOrderforKey:(id)a0 userDefaults:(id)a1 defaultOrder:(id)a2;
+ (void)migrateUserActivityOrderIfNecessary;
+ (id)builtinActivityOrder;

- (id)activitiesOrderedByUserActivityOrderForActivities:(id)a0;
- (BOOL)activityIsHidden:(id)a0;
- (void)setActivity:(id)a0 asHidden:(BOOL)a1;
- (void).cxx_destruct;
- (id)applicationExtensionForActivity:(id)a0;
- (void)postActivityUserDefaultsDidChangeNotification;
- (id)identifierForActivity:(id)a0;
- (id)activityIdentifiersInUserOrder;
- (id)activitiesBySortingActivities:(id)a0 byIdentifierWithDefaultActivityIdentifierOrdering:(id)a1;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)a0;
- (void)setActivityIdentifiersInUserOrder:(id)a0;
- (void)_userEditedActivityDefaults;
- (BOOL)canHideActivity:(id)a0;
- (id)initWithUnderlyingUserDefaults:(id)a0 activityDefaultsKey:(id)a1;
- (id)migrateSortOrderIfNeededForBuiltInActivityType:(id)a0 activityIdentifierOrdering:(id)a1;
- (void)updateUserActivityOrderWithOrderedPartialActivities:(id)a0;
- (void)removeActivityTypeFromDefaults:(id)a0;
- (BOOL)hasUserEditedActivityOrder;

@end
