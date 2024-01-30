@interface CoreODIEssentials.ODISystemNotificationSessionProxy : _TtCs12_SwiftObject <CoreODIEssentials.ODISystemNotificationSession> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ jetsamTransaction;
}

- (void)appleAccountCreatedWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)appleAccountDeletedWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)appleAccountModifiedWithAccount:(id)a0 oldAccount:(id)a1 completion:(id /* block */)a2;

@end
