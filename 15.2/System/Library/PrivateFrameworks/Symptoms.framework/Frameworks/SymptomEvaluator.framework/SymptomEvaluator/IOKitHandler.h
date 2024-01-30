@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IOKitHandler : NSObject <ConfigurableObjectProtocol> {
    unsigned long long _ioHdl;
    unsigned int _pwrConnect;
    unsigned int _pwrNotifier;
    struct IONotificationPort { } *_pwrPort;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _mostRecentAPWakeMachTime;
    unsigned long long _mostRecentAPSleepMachTime;
}

@property (readonly, nonatomic) unsigned long long mostRecentAPSleepMachTime;
@property (readonly, nonatomic) unsigned long long mostRecentAPWakeMachTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)read:(id)a0 returnedValues:(id)a1;
- (int)configureInstance:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned long long)mostRecentAPSleepMachTime;
- (void)enableIOKitPowerNotifications;
- (void)enableIOKitAssertionNotifications;
- (void)disableIOKitAssertionNotifications;
- (void)disableIOKitPowerNotifications;
- (void)reportIOPMAssertionException:(int)a0 pid:(int)a1;
- (unsigned long long)mostRecentAPWakeMachTime;
- (void)updateMostRecentAPSleepTime;
- (void)updateMostRecentAPWakeTime;

@end
