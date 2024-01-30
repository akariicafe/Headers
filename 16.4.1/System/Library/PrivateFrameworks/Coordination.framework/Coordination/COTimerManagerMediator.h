@class NSString, COTimerManager;

@interface COTimerManagerMediator : NSObject <COTimerManagerClientInterface>

@property (readonly, weak, nonatomic) COTimerManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postNotificationName:(id)a0 withUserInfo:(id)a1 callback:(id /* block */)a2;
- (id)initWithTimerManager:(id)a0;
- (void).cxx_destruct;

@end
