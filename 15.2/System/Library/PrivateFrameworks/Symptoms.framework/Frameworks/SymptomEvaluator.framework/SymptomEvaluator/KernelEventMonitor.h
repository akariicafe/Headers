@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface KernelEventMonitor : NSObject <ConfigurableObjectProtocol> {
    NSString *_symptomName;
    int _nativeSocket;
    int _nativeSocket6;
    NSObject<OS_dispatch_source> *_kernelNotificationSource;
    NSObject<OS_dispatch_source> *_kernelNotificationSource6;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)read:(id)a0 returnedValues:(id)a1;
- (int)configureInstance:(id)a0;
- (void)initListening;
- (void)_handleSocket:(int)a0;
- (void).cxx_destruct;
- (void)_handleNetworkEvent:(struct kern_event_msg { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[1]; } *)a0;

@end
