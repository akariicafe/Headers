@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSXExpositorClient : TSXClient <TSXExpositorClientProtocol> {
    NSObject<OS_dispatch_queue> *_clockManagerNotifications;
    NSMutableArray *_clockManagerMatchNotificationsArray;
    NSMutableArray *_clockManagerTerminateNotificationsArray;
    BOOL _clockManagerAvailable;
    NSObject<OS_dispatch_queue> *_ptpManagerNotifications;
    NSMutableArray *_ptpManagerMatchNotificationsArray;
    NSMutableArray *_ptpManagerTerminateNotificationsArray;
    BOOL _ptpManagerAvailable;
    BOOL _inited;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)serverProtocol;
+ (id)clientProtocol;
+ (id)sharedExpositorClient;

- (void)interruptedConnection;
- (void)gPTPManagerIsAvailable;
- (void)clockManagerIsAvailable;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)a0;
- (id)gPTPPortDiagnosticInfoForPortWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
- (id)gPTPManagerDiagnosticInfo;
- (void)gPTPManagerNotifyWhengPTPManagerIsAvailable:(id /* block */)a0;
- (id)clockManagerDiagnosticInfo;
- (id)clockManagerDaemonClassNameForClockIdentifier:(unsigned long long)a0;
- (void)invalidatedConnection;
- (void)clockManagerIsUnavailable;
- (id)clockNameForClockIdentifier:(unsigned long long)a0;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)a0 daemonClassName:(id *)a1;
- (id)init;
- (void)gPTPManagerIsUnavailable;
- (void)gPTPManagerNotifyWhengPTPManagerIsUnavailable:(id /* block */)a0;
- (id)exportedObject;
- (void)clockManagerNotifyWhenClockManagerIsAvailable:(id /* block */)a0;
- (id)kernelClockAvailableKernelClockIdentifiers;
- (void).cxx_destruct;
- (void)clockManagerNotifyWhenClockManagerIsUnavailable:(id /* block */)a0;

@end
