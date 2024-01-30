@interface HealthRecordsDaemon.DefaultDaemonXPCService : NSObject <HDXPCListenerDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ serverGenerator;
    void /* unknown type, empty encoding */ requiredEntitlementOverride;
}

- (id)exportObjectForListener:(id)a0 client:(id)a1 error:(id *)a2;
- (id)init;
- (void).cxx_destruct;

@end
