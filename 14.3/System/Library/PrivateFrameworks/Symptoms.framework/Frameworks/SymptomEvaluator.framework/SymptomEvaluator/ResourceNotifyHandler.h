@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ResourceNotifyHandler : NSObject <ConfigurableObjectProtocol> {
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _port;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)processOnBatteryOnly;
+ (id)configureClass:(id)a0;

- (int)read:(id)a0 returnedValues:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (int)configureInstance:(id)a0;
- (void)resouceNotifyEvent:(id)a0 triggeredBy:(char[33])a1 pid:(int)a2 path:(char[1024])a3 endTime:(struct mach_timespec { unsigned int x0; int x1; })a4 observedValue:(long long)a5 observationWindow:(long long)a6 limitValue:(long long)a7 limitWindow:(long long)a8 fatal:(BOOL)a9;
- (void)setupResourceNotifyReceiver;

@end
