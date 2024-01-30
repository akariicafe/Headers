@class NSString, STUsageBlock;

@interface STUsageCountedItem : NSManagedObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long numberOfPickups;
@property (readonly, nonatomic) long long numberOfNotifications;
@property (readonly, nonatomic) BOOL usageTrusted;
@property (readonly, nonatomic) STUsageBlock *block;

+ (id)notificationItemsExcludingSystemHiddenApplications:(id)a0;
+ (id)pickupItemsExcludingSystemHiddenApplications:(id)a0;

@end
