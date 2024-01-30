@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkInterface : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *hardwareAddress;
@property (copy) id /* block */ eventHandler;

- (id)__IPv4StateConfig;
- (id)IPv4Addresses;
- (id)IPv6Addresses;
- (id)__networkInterfaceHardwareAddress;
- (id)IPv6Flags;
- (id)IPv4BroadcastAddresses;
- (id)init;
- (void)stopEventMonitoring;
- (void).cxx_destruct;
- (BOOL)isLinkActive;
- (void)dealloc;
- (void)__startEventMonitoring;
- (id)__IPv6StateConfig;
- (BOOL)isMonitoringEvents;
- (id)airPortSetupConfiguration;
- (id)__hardwareAddress;
- (id)__networkStackHardwareAddress;
- (void)startEventMonitoring;
- (id)initWithInterfaceName:(id)a0;
- (id)IPv6PrefixLengths;
- (id)airPortStateConfiguration;
- (id)IPv4SubnetMasks;
- (id)__linkStateConfig;

@end
