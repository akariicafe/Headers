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
+ (id)newDefaultInstance;
+ (id)accountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)saslProfileName;
+ (id)displayedAccountTypeString;
+ (BOOL)isCommonPortNumber:(unsigned int)a0;
+ (void *)legacyKeychainProtocol;
+ (void)registerAppleServiceDeliveryHostname:(id)a0;

- (id)serviceName;
- (void)dealloc;
- (struct __CFString { } *)connectionServiceType;
- (void)checkInConnection:(id)a0;
- (void).cxx_destruct;
- (void)disconnect:(id)a0;
- (Class)connectionClass;
- (id)_defaultSettingsWithPort:(unsigned int)a0 useSSL:(BOOL)a1 directSSL:(BOOL)a2;
- (BOOL)_isAppleServiceDeliveryHostname:(id)a0;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)a0;
- (id)alternateConnectionSettings;
- (id)authenticatedConnection:(BOOL)a0;
- (BOOL)canBeFallbackAccount;
- (id)certUIService;
- (void)connectionExpired:(id)a0;
- (id)connectionSettingsForAuthentication:(BOOL)a0 secure:(id)a1 insecure:(id)a2;
- (id)customAuthenticationErrorStringForError:(id)a0 authScheme:(id)a1;
- (Class)deliveryClass;
- (id)errorForResponse:(id)a0;
- (id)insecureConnectionSettings;
- (id)preferredAuthScheme;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (id)secureConnectionSettings;
- (void)setDeliveryClass:(Class)a0;
- (void)setPreferredAuthScheme:(id)a0;
- (void)setSupportsOutboxCopy:(BOOL)a0;
- (void)setSupportsPipelining:(BOOL)a0;
- (void)setTimer;
- (BOOL)supportsOutboxCopy;
- (BOOL)supportsPipelining;

@end
