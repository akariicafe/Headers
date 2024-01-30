@class NSString, NSTimer, NSDate, NSObject;
@protocol OS_dispatch_queue, MTAlarmStorage;

@interface MTWidgetProvider : NSObject <MTAlarmObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) id<MTAlarmStorage> alarmStorage;
@property (retain, nonatomic) NSTimer *reloadTimer;
@property (retain, nonatomic) NSDate *lastReloadRequestDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (void)handleSystemReady;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (BOOL)bypassReloadForAlarms:(id)a0;
- (id)initWithAlarmStorage:(id)a0;
- (void)reloadTimeline;
- (void).cxx_destruct;
- (BOOL)bypassReloadForAlarm:(id)a0;

@end
