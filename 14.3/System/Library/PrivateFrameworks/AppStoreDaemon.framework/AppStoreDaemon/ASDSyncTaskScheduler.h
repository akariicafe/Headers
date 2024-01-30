@class NSString;

@interface ASDSyncTaskScheduler : NSObject <ASDTaskScheduler>

@property (class, readonly) ASDSyncTaskScheduler *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleBlock:(id /* block */)a0;

@end
