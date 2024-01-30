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

- (id)initWithInterfaceName:(id)a0;
- (id)IPv4Addresses;
- (id)airPortSetupConfiguration;
- (void)__startEventMonitoring;
- (void)restartEventMonitoring;
- (id)__IPv4StateConfig;
- (id)IPv6Addresses;
- (id)__networkInterfaceHardwareAddress;
- (id)__linkStateConfig;
- (id)IPv6Flags;
- (id)IPv4BroadcastAddresses;
- (void)dealloc;
- (void)startEventMonitoring;
- (BOOL)isLinkActive;
- (void)stopEventMonitoring;
- (id)IPv4SubnetMasks;
- (id)init;
- (id)IPv6PrefixLengths;
- (BOOL)isMonitoringEvents;
- (id)__IPv6StateConfig;
- (id)airPortStateConfiguration;
- (void).cxx_destruct;

@end
