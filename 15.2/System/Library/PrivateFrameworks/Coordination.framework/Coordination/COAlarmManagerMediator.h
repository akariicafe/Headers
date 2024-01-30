@class NSString, COAlarmManager;

@interface COAlarmManagerMediator : NSObject <COAlarmManagerClientInterface>

@property (readonly, weak, nonatomic) COAlarmManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAlarmManager:(id)a0;
- (void)postNotificationName:(id)a0 withUserInfo:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
