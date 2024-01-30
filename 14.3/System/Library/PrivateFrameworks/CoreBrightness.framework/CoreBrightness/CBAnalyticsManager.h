@class NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface CBAnalyticsManager : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_reportTimer;
    NSMutableDictionary *_timestamps;
    NSMutableDictionary *samples;
    BOOL _userActive;
}

+ (id)sharedInstance;
+ (BOOL)handleColorSample:(id)a0;
+ (void)sendEventOnceADayLazy:(id)a0 andDict:(id)a1;
+ (void)stopReporting:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (id)stringForType:(unsigned long long)a0;
- (BOOL)handleColorSampleInternal:(id)a0;
- (void)startReporting;
- (void)logColorSample:(id)a0 withType:(id)a1;
- (void)sendEventLazy:(id)a0 andDict:(id)a1;
- (void)sendEventOnceADayLazyInternal:(id)a0 andDict:(id)a1;
- (BOOL)isFirstEventToday:(id)a0;
- (void)logAllColorSamples;
- (void)stopReportingInternal:(unsigned long long)a0;
- (BOOL)isSameDay:(id)a0 asDay:(id)a1;
- (void)storeTimestamp:(id)a0 forEventName:(id)a1;
- (void)setUserActive:(BOOL)a0;

@end
