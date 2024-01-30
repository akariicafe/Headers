@class NSDictionary;

@interface FTEntitlementSupport : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CFString { } *_entitlementStatus;
}

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (id)_rawEntitlementValue;
- (BOOL)_disconnectCTServerConnection;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;
- (void)_entitlementStatusChanged;
- (void)_handleCTServiceRequestName:(struct __CFString { } *)a0 userInfo:(struct __CFDictionary { } *)a1 contextInfo:(void *)a2;
- (BOOL)_setupCTServerConnection;
- (void)_cleanupMachInfo;
- (id)init;
- (void)_unregisterForCTEntitlementNotifications;
- (BOOL)_registerForCTEntitlementNotifications;

@end
