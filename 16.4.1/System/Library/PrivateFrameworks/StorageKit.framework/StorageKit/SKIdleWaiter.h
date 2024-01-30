@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface SKIdleWaiter : NSObject <SKManagerListener>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
