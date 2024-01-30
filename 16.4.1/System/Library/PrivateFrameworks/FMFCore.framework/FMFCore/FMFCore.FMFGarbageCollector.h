@interface FMFCore.FMFGarbageCollector : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ garbageCollectorIdentityKey;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ shouldRemoveFiles;
    void /* unknown type, empty encoding */ isAccountVerificationPending;
    void /* unknown type, empty encoding */ fmfAccountIdentifier;
    void /* unknown type, empty encoding */ identifierQueue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ paths;
}

- (void)scheduleAccountVerificationWithNotification:(id)a0;

@end
