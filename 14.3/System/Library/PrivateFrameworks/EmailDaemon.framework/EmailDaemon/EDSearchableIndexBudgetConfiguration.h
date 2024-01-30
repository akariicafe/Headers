@class NSString;

@interface EDSearchableIndexBudgetConfiguration : NSObject <EFPubliclyDescribable>

@property (nonatomic) BOOL enableActivityBasedScheduling;
@property (nonatomic) BOOL autoStartMaintenanceIndexing;
@property (nonatomic) BOOL allowBacklogIndexingOnPower;
@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) double periodDuration;
@property (readonly, nonatomic) long long numberOfItemsToIndexOnResume;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfiguration;
+ (id)nonSchedulingBudgetConfiguration;

@end
