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
+ (void)stopReporting:(unsigned long long)a0;
+ (BOOL)handleColorSample:(id)a0;
+ (void)sendEventOnceADayLazy:(id)a0 andDict:(id)a1;

- (BOOL)handleColorSampleInternal:(id)a0;
- (void)logAllColorSamples;
- (BOOL)isFirstEventToday:(id)a0;
- (void)startReporting;
- (void)dealloc;
- (void)logColorSample:(id)a0 withType:(id)a1;
- (id)stringForType:(unsigned long long)a0;
- (void)stopReportingInternal:(unsigned long long)a0;
- (void)setUserActive:(BOOL)a0;
- (id)init;
- (void)sendEventLazy:(id)a0 andDict:(id)a1;
- (void)sendEventOnceADayLazyInternal:(id)a0 andDict:(id)a1;
- (BOOL)isSameDay:(id)a0 asDay:(id)a1;
- (void)storeTimestamp:(id)a0 forEventName:(id)a1;

@end
