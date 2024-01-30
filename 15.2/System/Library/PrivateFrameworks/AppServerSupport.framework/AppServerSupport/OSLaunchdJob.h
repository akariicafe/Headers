@class NSUUID, OSLaunchdDomain, NSObject;
@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;

@interface OSLaunchdJob : NSObject {
    NSObject<OS_xpc_object> *_plist;
    OSLaunchdDomain *_domain;
    NSObject<OS_dispatch_source> *_monitor_source;
    id /* block */ _monitor_handler;
    NSObject<OS_dispatch_queue> *_monitor_queue;
}

@property (class, nonatomic) BOOL disableLogging_4watchdogd;

@property (readonly, nonatomic) NSUUID *handle;

+ (id)copyJobsManagedBy:(id)a0 error:(id *)a1;
+ (long long)jobStateFromMessage:(id)a0;
+ (id)submitExtension:(id)a0 overlay:(id)a1 domain:(id)a2 error:(id *)a3;
+ (id)jobInfoFromMessage:(id)a0;
+ (id)_createJobFromReplyHandle:(id)a0;
+ (id)copyJobWithPid:(int)a0;
+ (id)copyJobWithHandle:(id)a0;
+ (int)_monitorNormalizeError:(int)a0;
+ (id)copyJobWithLabel:(id)a0 domain:(id)a1;

- (BOOL)remove:(id *)a0;
- (id)start:(id *)a0;
- (BOOL)submit:(id *)a0;
- (id)initWithPlist:(id)a0;
- (id)description;
- (void)_startMonitoringAfterSubmit:(id)a0;
- (void)_setupMonitorSourceWithPort:(unsigned int)a0 onQueue:(id)a1 withHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithPlist:(id)a0 domain:(id)a1;
- (id)_initWithHandle:(id)a0;
- (id)_newRequest;
- (id)_newSubmitRequest;
- (id)createInstance:(unsigned char[16])a0 error:(id *)a1;
- (void)_populateHandle:(id)a0;
- (id)submitAndStart:(id *)a0;
- (void)monitorOnQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)cancelMonitor;

@end
