@class NSArray, NSString, STBlueprintUsageLimitScheduleRepresentation, STBlueprint, NSNumber;
@protocol STSerializableManagedObject;

@interface STBlueprintUsageLimit : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (nonatomic) double day0Limit;
@property (nonatomic) double day1Limit;
@property (nonatomic) double day2Limit;
@property (nonatomic) double day3Limit;
@property (nonatomic) double day4Limit;
@property (nonatomic) double day5Limit;
@property (nonatomic) double day6Limit;
@property (readonly, nonatomic) STBlueprint *blueprint;
@property (copy, nonatomic) NSArray *applicationIdentifiers;
@property (copy, nonatomic) NSArray *categoryIdentifiersVersion2;
@property (copy, nonatomic) NSArray *websiteIdentifiers;
@property (retain, nonatomic) NSNumber *notificationTimeInterval;
@property (retain, nonatomic) STBlueprintUsageLimitScheduleRepresentation *budgetLimitScheduleRepresentation;
@property (copy, nonatomic) NSString *usageItemType;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (copy, nonatomic) NSArray *categoryIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;

+ (id)limitKeyPaths;
+ (id)keyPathsForValuesAffectingBudgetLimitScheduleRepresentation;

- (void)awakeFromFetch;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (void)setItemIdentifiers:(id)a0;
- (id)dictionaryRepresentation;
- (void)setCategoryIdentifiers:(id)a0;
- (void)setCategoryIdentifiersVersion2:(id)a0;
- (void)setApplicationIdentifiers:(id)a0;
- (void)setWebsiteIdentifiers:(id)a0;
- (void)setUsageItemType:(id)a0;
- (void)setBudgetLimit:(double)a0 forDay:(unsigned long long)a1;
- (void)setBudgetLimit:(double)a0;
- (void)_usageLimitDidChangeFromOldApplicationIdentifiers:(id)a0 oldCategoryIdentifiers:(id)a1 oldCategoryIdentifiersVersion2:(id)a2 oldWebDomains:(id)a3 oldItemIdentifiers:(id)a4 oldItemType:(id)a5 toNewApplicationIdentifiers:(id)a6 newCategoryIdentifiers:(id)a7 newCategoryIdentifiersVersion2:(id)a8 newWebDomains:(id)a9 newItemIdentifiers:(id)a10 newItemType:(id)a11;

@end
