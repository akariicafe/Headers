@class ATXNotificationAndSuggestionDatastore;

@interface ATXDigestSetupFlowProvider : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
}

@property (nonatomic) BOOL containsMessageAndTimeSensitiveData;
@property (nonatomic) unsigned long long numDaysOfData;

- (id)initWithDatastore:(id)a0;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addRemainingAppsWithNoNotificationVolume:(id)a0;
- (id)appsSortedByNumOfNotificationsGivenNumOfDays:(unsigned long long)a0;
- (id)appsSortedByNumOfNotificationsUsingNotificationUsageStreamGivenNumOfDays:(unsigned long long)a0;
- (unsigned long long)numDaysSinceTimestamp:(double)a0;

@end
