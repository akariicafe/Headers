@class _PASLock, NSString, _ATXDuetHelper;

@interface ATXAppLaunchMicroLocation : NSObject {
    _PASLock *_lock;
    _ATXDuetHelper *_duetHelper;
    NSString *_path;
}

- (id)_getAppLaunchCorrelationMatrix;
- (void)train;
- (void).cxx_destruct;
- (id)init;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;
- (id)initWithDuetHelper:(id)a0 directory:(id)a1 forTesting:(BOOL)a2;
- (id)_getActionKeyCorrelationMatrix;
- (void)_receivedNotificationOfNewMicroLocation;
- (BOOL)_loadCorrelationMatrices;
- (void)_subscribeToDKInsertionEvents;
- (id)_getHistoricalData;
- (void)tryLoadCorrelationMatricesImmediately;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;

@end
