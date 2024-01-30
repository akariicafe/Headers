@class SiriAnalyticsRootClock, NSObject;
@protocol OS_dispatch_queue, SiriAnalyticsWhiteRoseDelegate, OS_dispatch_source;

@interface SiriAnalyticsWhiteRose : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsWhiteRoseDelegate> _delegate;
    SiriAnalyticsRootClock *_activeClock;
    SiriAnalyticsRootClock *_trailingClock;
    NSObject<OS_dispatch_source> *_inactivityTimer;
    double _maximumInactivityInterval;
    NSObject<OS_dispatch_source> *_maximumClockLifeTimer;
    double _maximumClockLifeInterval;
}

- (void)_cancelMaximumClockLifeTimer;
- (void)markTimeForAnnotatedMessages:(id)a0 completion:(id /* block */)a1;
- (void)_cancelInactivityTimer;
- (void)_destroyActiveClock;
- (void)_startMaximumClockLifeTimer;
- (void)_maximumClockLifeExpired;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_startInactivityTimer;
- (id)_ensureActiveClock;
- (void)_inactivityTimerElapsed;

@end
