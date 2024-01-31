@class NSString, NSDictionary, NSData, NSObject;
@protocol ACCTransportIOAccessoryAuthCPProtocol, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACCTransportIOAccessoryAuthCP : ACCTransportIOAccessoryBase

@property (retain) NSObject<OS_dispatch_queue> *authWorkQueue;
@property (retain) NSObject<OS_dispatch_source> *authTimerSource;
@property unsigned char authTryCurrent;
@property unsigned char authTryMaximum;
@property unsigned char authVersionMajor;
@property unsigned short deviceID;
@property struct _AuthCertCapsInt_t { unsigned long long authCertCaps0; unsigned long long authCertCaps1; unsigned long long authCertCaps2; unsigned long long authCertCaps3; } authCertCaps;
@property const void *pAuthCertCache;
@property unsigned int ioServiceUpstream;
@property (nonatomic) int accConnectionType;
@property BOOL bIsShuttingDown;
@property int certType;
@property (retain) NSDictionary *certInfo;
@property (nonatomic) BOOL representsInductiveTransport;
@property (nonatomic) int representsInternalModule;
@property unsigned int authFlags;
@property unsigned long long authTimerStartTimestamp;
@property int fdrValidationStatus;
@property int authErrorDescription;
@property unsigned int forcedReAuthCount;
@property BOOL certIsCached;
@property unsigned char softwareErrorRetry;
@property struct IONotificationPort { } *batteryNotifyPortRef;
@property unsigned int battery_iter;
@property struct IONotificationPort { } *transportNotifyPortRef;
@property (retain) NSObject<OS_dispatch_semaphore> *pairedSema;
@property BOOL notificationsAvailable;
@property (weak, nonatomic) id<ACCTransportIOAccessoryAuthCPProtocol> delegate;
@property (readonly, nonatomic) int authStatus;
@property (readonly, nonatomic) BOOL authTimedOut;
@property (readonly, nonatomic) NSData *pAuthCertificate;
@property (retain, nonatomic) NSString *connectionUUID;
@property (retain, nonatomic) NSString *endpointUUID;
@property (readonly, nonatomic) int authType;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_logToAnalytics;
- (void)_finishAuthentication:(BOOL)a0 authCert:(struct __CFData { } *)a1;
- (BOOL)_authInternalModuleWithCert:(const struct __CFData **)a0 withError:(int *)a1;
- (BOOL)_authWithAuthIC:(unsigned int)a0 withCert:(const struct __CFData **)a1 withError:(int *)a2;
- (BOOL)_copyCertificateAttribute:(struct __CFData { } *)a0 forAttributeKey:(struct __CFNumber { } *)a1 withAttributeValue:(const struct __CFData **)a2;
- (struct __CFDictionary { } *)_copyOrCreateStatsSubDict:(struct __CFDictionary { } *)a0 forSerialNumber:(struct __CFString { } *)a1;
- (int)_fdrCertCheck;
- (BOOL)_handleAuthCertSerialNumber:(struct __CFString { } *)a0 certData:(const struct __CFData **)a1;
- (BOOL)_handleAuthCertificate:(struct __CFData { } *)a0 serialNumber:(struct __CFString { } *)a1 authError:(int *)a2;
- (BOOL)_handleAuthDeviceInfo:(int)a0 versionMajor:(unsigned char)a1 versionMinor:(unsigned char)a2;
- (BOOL)_handleAuthSignature:(struct __CFData { } *)a0 certData:(struct __CFData { } *)a1 nonceData:(struct __CFData { } *)a2;
- (void)_handleAuthTimerTimeout;
- (void)_incrementAuthStat:(const struct __CFString { } *)a0 dict:(struct __CFDictionary { } *)a1;
- (void)_publishAuth:(BOOL)a0 fdrStatus:(int)a1 trusted:(BOOL)a2 publishToUI:(BOOL)a3 ioconnect:(unsigned int)a4;
- (void)_publishAuthStats:(BOOL)a0 fdrStatus:(int)a1;
- (BOOL)_representsHardwareComponent;
- (void)_resetAfterAuthCompletion;
- (void)_validateAuthCPFlagsForCertificate;
- (BOOL)_validateCertCapsForCertificate:(struct __CFData { } *)a0 authError:(int *)a1;
- (void)_validateDownstreamCertSerialNumber;
- (void)doPostAuthentication;
- (id)initWithDelegate:(id)a0 andIOService:(unsigned int)a1 connectionType:(int)a2;
- (BOOL)requiresAuthenticationProcess;
- (void)startAuthenticationProcess;
- (void)startShutdownProcess;

@end
