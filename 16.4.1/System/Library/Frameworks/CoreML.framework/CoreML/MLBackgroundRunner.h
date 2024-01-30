@class NSString, MLBackgroundTask, NSObject, _DASActivity;
@protocol OS_dispatch_queue, NSObject;

@interface MLBackgroundRunner : NSObject <_DASExtensionRunner>

@property BOOL shouldStop;
@property (retain, nonatomic) _DASActivity *activity;
@property (retain, nonatomic) MLBackgroundTask *task;
@property (retain, nonatomic) id<NSObject> dataSource;
@property (retain) NSObject<OS_dispatch_queue> *watchdogQueue;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (id)init;
- (unsigned char)start;
- (void).cxx_destruct;
- (BOOL)createExtensionDataSourceWithInfoKey:(id)a0 conformingToProtocol:(id)a1;
- (BOOL)prepareForActivity:(id)a0;

@end
