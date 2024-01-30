@class NSString, NSMutableDictionary, NSMutableOrderedSet, NCNotificationRequest, NSMutableArray;

@interface NCNotificationSummaryBuilder : NSObject {
    NCNotificationRequest *_leadingNotificationRequest;
    NSMutableOrderedSet *_formatStrings;
    NSMutableDictionary *_formatStringsCounts;
    NSMutableOrderedSet *_arguments;
    NSMutableDictionary *_argumentsCounts;
    unsigned long long _defaultFormatsCount;
    unsigned long long _emptyArgumentsCount;
}

@property (readonly, copy, nonatomic) NSString *summaryText;
@property (readonly, nonatomic) NSMutableArray *notificationRequests;

- (id)_localizedSummaryWithFormat:(id)a0 notificationsCount:(unsigned long long)a1 arguments:(id)a2;
- (void)_insertString:(id)a0 intoSequence:(id)a1 withCounters:(id)a2;
- (id)_localizedSummaryWithFormats:(id)a0 andCounts:(id)a1;
- (void)_addNotificationRequest:(id)a0;
- (id)_formatListWithArguments:(id)a0 truncated:(BOOL)a1 truncatedArgumentsCount:(unsigned long long *)a2;
- (unsigned long long)_summaryNotificationsCount;
- (id)description;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)a0;
- (void)updateWithNotificationRequests:(id)a0;
- (void).cxx_destruct;
- (id)_buildSummaryText;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)a0 arguments:(id)a1;
- (void)_updateSummaryText;
- (id)_formatListWithArguments:(id)a0;
- (id)_filteredArgumentsArrayWithArguments:(id)a0;

@end
