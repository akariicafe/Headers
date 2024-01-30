@class FMXPCServiceDescription, FMXPCSession, NSObject;
@protocol OS_dispatch_queue, SPSchedulerXPCProtocol;

@interface SPScheduler : NSObject

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPSchedulerXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)remoteInterface;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)schedulePublishWakeWithInformation:(id)a0 completion:(id /* block */)a1;
- (void)publishImmediatelyWithCompletion:(id /* block */)a0;

@end
