@class NSTimer, MFSMTPConnection;

@interface SMTPAccount : DeliveryAccount {
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    long long _lastTimerSetTime;
    unsigned char _supportsPipelining : 1;
    unsigned char _supportsOutboxCopy : 1;
    unsigned char _useCellDataOnly : 1;
}

+ (unsigned int)defaultPortNumber;
+ (id)accountTypeString;
+ (id)newDefaultInstance;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (void *)legacyKeychainProtocol;
+ (BOOL)isCommonPortNumber:(unsigned int)a0;
+ (id)saslProfileName;
+ (void)registerAppleServiceDeliveryHostname:(id)a0;

- (void)checkInConnection:(id)a0;
- (void)disconnect:(id)a0;
- (void)setTimer;
- (void)dealloc;
- (struct __CFString { } *)connectionServiceType;
- (id)serviceName;
- (void)releaseAllConnections;
- (id)preferredAuthScheme;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)a0;
- (Class)connectionClass;
- (id)certUIService;
- (void)releaseAllForcedConnections;
- (void)setPreferredAuthScheme:(id)a0;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (Class)deliveryClass;
- (BOOL)canBeFallbackAccount;
- (BOOL)supportsOutboxCopy;
- (id)errorForResponse:(id)a0;
- (BOOL)supportsPipelining;
- (id)_defaultSettingsWithPort:(unsigned int)a0 useSSL:(BOOL)a1 directSSL:(BOOL)a2;
- (id)connectionSettingsForAuthentication:(BOOL)a0 secure:(id)a1 insecure:(id)a2;
- (void)setSupportsPipelining:(BOOL)a0;
- (void)setSupportsOutboxCopy:(BOOL)a0;
- (void)connectionExpired:(id)a0;
- (BOOL)_isAppleServiceDeliveryHostname:(id)a0;
- (void)setDeliveryClass:(Class)a0;
- (id)customAuthenticationErrorStringForError:(id)a0 authScheme:(id)a1;
- (id)authenticatedConnection:(BOOL)a0;

@end
