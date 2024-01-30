@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMINotifydObserver : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ callback;
@property (nonatomic) int token;
@property (readonly, nonatomic) const char *notificationName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)start;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotificationName:(const char *)a0 andQueue:(id)a1 andCallback:(id /* block */)a2;
- (void)publishValueForToken:(int)a0;
- (void)publishInitialValue;

@end
