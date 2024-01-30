@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface STYFrameworkHelper : NSObject

@property (retain) NSObject<OS_dispatch_queue> *sharedSerialQueueAtUtility;
@property (retain) NSObject<OS_dispatch_queue> *sharedConcurrentQueueAtUtility;
@property (retain) NSObject<OS_dispatch_queue> *sharedConcurrentQueueAtBackground;
@property (retain) NSObject<OS_os_log> *logHandle;

+ (id)sharedHelper;

- (id)subsystemForSignposts;
- (void).cxx_destruct;

@end
