@class NSString, NSSet, STUsageBlock;

@interface STUsageCategory : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long totalTimeInSeconds;
@property (retain, nonatomic) NSSet *timedItems;
@property (retain, nonatomic) STUsageBlock *block;

+ (id)applicationAndWebItemsExcludingSystemHiddenApplications:(id)a0;
+ (id)categoryItemsExcludingSystemCategories:(id)a0;

@end
