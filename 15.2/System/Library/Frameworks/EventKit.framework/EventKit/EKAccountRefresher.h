@class NSDate, NSArray, EKEventStore;
@protocol EKAccountRefresherDelegate;

@interface EKAccountRefresher : NSObject {
    EKEventStore *_eventStore;
    BOOL _currentlySyncing;
    NSDate *_refreshStartDate;
    NSArray *_refreshingSources;
    NSArray *_refreshingCalendars;
}

@property (weak, nonatomic) id<EKAccountRefresherDelegate> delegate;
@property (readonly, nonatomic) BOOL refreshing;
@property (readonly, nonatomic) BOOL allAccountsOffline;

- (void)_eventStoreChanged:(id)a0;
- (id)initWithEventStore:(id)a0;
- (void)_syncDidStart;
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
- (void)_syncStartTimeoutExpired;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void).cxx_destruct;
- (void)_syncDidEnd;
- (void)refresh;

@end
