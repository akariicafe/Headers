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

- (id)IPv4Addresses;
- (id)initWithInterfaceName:(id)a0;
- (id)__IPv4StateConfig;
- (void)__startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)IPv4SubnetMasks;
- (void)stopEventMonitoring;
- (id)IPv6Addresses;
- (void)startEventMonitoring;
- (id)IPv6PrefixLengths;
- (void).cxx_destruct;
- (id)init;
- (id)__IPv6StateConfig;
- (void)dealloc;
- (id)__networkInterfaceHardwareAddress;
- (id)__linkStateConfig;
- (id)airPortStateConfiguration;
- (id)airPortSetupConfiguration;
- (id)IPv4BroadcastAddresses;
- (id)IPv6Flags;
- (BOOL)isLinkActive;

@end
