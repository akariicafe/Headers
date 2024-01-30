@class NSDictionary;

@interface FTEntitlementSupport : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CFString { } *_entitlementStatus;
}

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (void)_handleCTServiceRequestName:(struct __CFString { } *)a0 userInfo:(struct __CFDictionary { } *)a1 contextInfo:(void *)a2;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_entitlementStatusChanged;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;
- (BOOL)_setupCTServerConnection;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (id)init;
- (void)_cleanupMachInfo;
- (BOOL)_disconnectCTServerConnection;
- (BOOL)_registerForCTEntitlementNotifications;
- (id)_rawEntitlementValue;

@end
