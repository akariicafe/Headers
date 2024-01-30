@class _PASLock, NSString, _ATXDuetHelper;

@interface ATXAppLaunchMicroLocation : NSObject {
    _PASLock *_lock;
    _ATXDuetHelper *_duetHelper;
    NSString *_path;
}

- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (id)_getAppLaunchCorrelationMatrix;
- (id)init;
- (id)_getActionKeyCorrelationMatrix;
- (void).cxx_destruct;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;
- (void)_receivedNotificationOfNewMicroLocation;
- (BOOL)loadCorrelationMatrices;
- (void)_subscribeToDKInsertionEvents;
- (void)train;
- (id)initWithDuetHelper:(id)a0 directory:(id)a1 forTesting:(BOOL)a2;
- (id)_getHistoricalData;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;

@end
