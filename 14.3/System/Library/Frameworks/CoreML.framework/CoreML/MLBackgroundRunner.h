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

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)prepareForActivity:(id)a0;
- (BOOL)createExtensionDataSourceWithInfoKey:(id)a0 conformingToProtocol:(id)a1;
- (unsigned char)start;

@end
