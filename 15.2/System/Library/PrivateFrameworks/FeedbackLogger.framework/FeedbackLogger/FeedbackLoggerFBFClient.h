@class NSObject, NSDistributedNotificationCenter, NSXPCConnection;
@protocol OS_os_log, FeedbackLoggerDaemonXPC;

@interface FeedbackLoggerFBFClient : NSObject

@property (retain, nonatomic) NSXPCConnection *daemonConnection;
@property (retain, nonatomic) id<FeedbackLoggerDaemonXPC> fbf;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)init;
- (void)scheduleImmediateUploadWithHeaders:(id)a0 completion:(id /* block */)a1;

@end
