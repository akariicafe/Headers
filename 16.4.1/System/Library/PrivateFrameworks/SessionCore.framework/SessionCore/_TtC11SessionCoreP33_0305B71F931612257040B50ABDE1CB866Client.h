@interface _TtC11SessionCoreP33_0305B71F931612257040B50ABDE1CB866Client : NSObject <ACActivityOutputXPCServer> {
    void /* unknown type, empty encoding */ _target;
    void /* unknown type, empty encoding */ processIdentifier;
    void /* unknown type, empty encoding */ hasActivityListenerEntitlement;
    void /* unknown type, empty encoding */ processManager;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _lock_subscriptionOptions;
    void /* unknown type, empty encoding */ _lock_pendingChangeAck;
    void /* unknown type, empty encoding */ _lock_bufferedChanges;
}

- (void)unsubscribe;
- (id)init;
- (void).cxx_destruct;
- (id)activityDescriptorContentStatesWithError:(id *)a0;
- (id)activityDescriptorsWithError:(id *)a0;
- (id)activityDescriptorForIdentifier:(id)a0;
- (id)subscribeWithOptions:(id)a0 error:(id *)a1;

@end
