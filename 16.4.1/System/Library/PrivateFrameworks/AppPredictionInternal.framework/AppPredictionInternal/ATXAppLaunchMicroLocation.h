@class _PASLock, NSString, _ATXDuetHelper;

@interface ATXAppLaunchMicroLocation : NSObject {
    _PASLock *_lock;
    _ATXDuetHelper *_duetHelper;
    NSString *_path;
}

- (void)train;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (void)_receivedNotificationOfNewMicroLocation;
- (BOOL)_loadCorrelationMatrices;
- (void)_subscribeToDKInsertionEvents;
- (void)tryLoadCorrelationMatricesImmediately;
- (id)_getActionKeyCorrelationMatrix;
- (id)initWithDuetHelper:(id)a0 directory:(id)a1 forTesting:(BOOL)a2;
- (id)init;
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (id)_getAppLaunchCorrelationMatrix;
- (void).cxx_destruct;
- (id)_getHistoricalData;

@end
