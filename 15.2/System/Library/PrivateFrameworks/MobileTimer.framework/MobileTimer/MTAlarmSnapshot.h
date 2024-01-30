@class MTAlarmStorage, NSString;

@interface MTAlarmSnapshot : MTSnapshotScheduler <MTAlarmObserver>

@property (readonly, nonatomic) MTAlarmStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldScheduleSnapshotForAlarms:(id)a0;

- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (id)initWithStorage:(id)a0;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void).cxx_destruct;

@end
