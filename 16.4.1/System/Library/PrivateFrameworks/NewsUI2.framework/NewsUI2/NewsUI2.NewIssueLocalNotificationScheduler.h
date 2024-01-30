@interface NewsUI2.NewIssueLocalNotificationScheduler : NSObject <FCIssueReadingHistoryObserving> {
    void /* unknown type, empty encoding */ newIssueThreadIdentifier;
    void /* unknown type, empty encoding */ secondsPerDay;
    void /* unknown type, empty encoding */ notificationService;
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ secondsPastMidnightToDeliverNotification;
    void /* unknown type, empty encoding */ issueReadingHistory;
}

- (void)issueReadingHistoryDidChange:(id)a0 forIssueIDs:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
