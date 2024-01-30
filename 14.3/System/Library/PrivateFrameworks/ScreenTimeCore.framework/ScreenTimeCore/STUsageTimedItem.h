@class NSString, STUsageCategory;

@interface STUsageTimedItem : NSManagedObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) long long totalTimeInSeconds;
@property (readonly, nonatomic) BOOL usageTrusted;
@property (readonly, nonatomic) STUsageCategory *category;

@end
