@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _CDAppActionRecorder : NSObject <_CDActivityEventRecording, _CDAppActionRecording>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *previousActivityType;
@property (retain, nonatomic) NSString *previousTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appActionRecorder;

- (void)createConnection;
- (void)recordAppAction:(id)a0;
- (void)recordUserActivityEvent:(id)a0;
- (void)_recordUserActivityEvent:(id)a0;
- (void)recordUserActivityEvents:(id)a0;
- (void)recordUserActivityEventForCollection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
