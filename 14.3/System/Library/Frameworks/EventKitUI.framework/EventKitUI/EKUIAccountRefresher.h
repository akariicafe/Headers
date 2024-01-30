@class CalendarModel, NSArray, NSDate;
@protocol EKUIAccountRefresherDelegate;

@interface EKUIAccountRefresher : NSObject {
    CalendarModel *_model;
    BOOL _currentlySyncing;
    NSDate *_refreshStartDate;
    NSArray *_refreshingSources;
    NSArray *_refreshingCalendars;
}

@property (weak, nonatomic) id<EKUIAccountRefresherDelegate> delegate;
@property (readonly, nonatomic) BOOL refreshing;
@property (readonly, nonatomic) BOOL allAccountsOffline;

- (void)refresh;
- (void)_eventStoreChanged:(id)a0;
- (void).cxx_destruct;
- (BOOL)_areAnySourcesCurrentlySyncing;
- (BOOL)_areAnyCalendarsCurrentlySyncing;
- (void)_cancelSyncStartTimeout;
- (BOOL)_allSourcesRefreshed;
- (BOOL)_allCalendarsRefreshed;
- (void)_syncCompleted;
- (void)_beginSyncStartTimeout;
- (BOOL)sourceFinishedRefreshing:(id)a0;
- (BOOL)calendarFinishedRefreshing:(id)a0;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_syncDidEnd;
- (void)_syncStartTimeoutExpired;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (id)initWithCalendarModel:(id)a0;
- (void)_syncDidStart;

@end
