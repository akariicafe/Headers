@class NSString;

@interface CALNNullAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor>

@property (class, readonly, nonatomic) CALNNullAlarmEngineMonitor *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAlarmsFiredObserver:(id)a0 selector:(SEL)a1;
- (void)removeAlarmsFiredObserver:(id)a0;

@end
