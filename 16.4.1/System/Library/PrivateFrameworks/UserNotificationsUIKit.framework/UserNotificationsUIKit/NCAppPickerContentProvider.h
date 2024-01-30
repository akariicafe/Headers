@class NSArray, NSString, NSMutableSet;

@interface NCAppPickerContentProvider : NSObject {
    NSArray *_appsSortedByAvgNumberOfNotificationsDescending;
    NSArray *_appsSortedByNameAscending;
    NSMutableSet *_selectedApps;
}

@property (readonly, nonatomic) unsigned long long maxAvgNumberOfNotifications;
@property (readonly, nonatomic, getter=isSortedByAvgNumberOfNotifications) BOOL sortedByAvgNumberOfNotifications;
@property (readonly, nonatomic, getter=isAbleToSortByAvgNumberOfNotifications) BOOL ableToSortByAvgNumberOfNotifications;
@property (readonly, copy, nonatomic) NSArray *selectedBundleIdentifiers;
@property (readonly, nonatomic) unsigned long long totalCount;
@property (readonly, nonatomic) unsigned long long selectedCount;
@property (readonly, copy, nonatomic) NSString *longestAppName;

+ (void)providerWithPreviousBundleIdentifiersSelection:(id)a0 numDaysForAverageNotificationCount:(id)a1 onMainQueue:(id /* block */)a2;

- (void).cxx_destruct;
- (id)_appForIndex:(unsigned long long)a0;
- (id)_initWithATXDigestSetupEntities:(id)a0 containsMessageAndTimeSensitiveData:(BOOL)a1 numberOfDays:(unsigned long long)a2 previousBundleIdentifiersSelection:(id)a3;
- (unsigned long long)avgNumberOfNotificationsForIndex:(unsigned long long)a0;
- (id)bundleIdentifierForIndex:(unsigned long long)a0;
- (id)imageForIndex:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isSelectedForIndex:(unsigned long long)a0;
- (id)nameForIndex:(unsigned long long)a0;
- (void)sortByAvgNumberOfNotifications;
- (void)sortByName;
- (void)toggleSelectedForIndex:(unsigned long long)a0;

@end
