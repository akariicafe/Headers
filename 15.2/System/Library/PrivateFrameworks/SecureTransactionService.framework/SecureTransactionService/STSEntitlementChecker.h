@interface STSEntitlementChecker : NSObject {
    BOOL _xpcClientNotificationListenerAccess;
    int _clientProcessIdentifier;
}

@end
