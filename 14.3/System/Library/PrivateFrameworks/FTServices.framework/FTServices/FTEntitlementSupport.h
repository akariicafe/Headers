@class NSDictionary;

@interface FTEntitlementSupport : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CFString { } *_entitlementStatus;
}

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (void)_unregisterForCTEntitlementNotifications;
- (BOOL)_disconnectCTServerConnection;
- (id)init;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_registerForCTEntitlementNotifications;
- (void)_handleCTServiceRequestName:(struct __CFString { } *)a0 userInfo:(struct __CFDictionary { } *)a1 contextInfo:(void *)a2;
- (BOOL)_setupCTServerConnection;
- (id)_rawEntitlementValue;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;
- (void)_entitlementStatusChanged;
- (void)_cleanupMachInfo;

@end
