@class NSURLCredentialStorage, NSString, NSArray, NSData, NSSet, NSHTTPCookieStorage, NSDictionary, NSURL, NSURLCache, NSNumber;
@protocol NSURLSessionAppleIDContext;

@interface NSURLSessionEffectiveConfiguration : __NSURLSessionEffectiveConfiguration_Base

@property double _connectionCacheCellPurgeTimeout;
@property (copy) NSDictionary *_socketStreamProperties;
@property (retain) NSHTTPCookieStorage *HTTPCookieStorage;
@property (retain) NSURLCache *URLCache;
@property (copy) NSDictionary *HTTPAdditionalHeaders;
@property (retain) NSURLCredentialStorage *URLCredentialStorage;
@property (copy) NSArray *protocolClasses;
@property double timeoutIntervalForResource;
@property BOOL allowsCellularAccess;
@property (getter=isDiscretionary) BOOL discretionary;
@property BOOL shouldUseExtendedBackgroundIdleMode;
@property BOOL waitsForConnectivity;
@property BOOL allowsExpensiveNetworkAccess;
@property BOOL allowsConstrainedNetworkAccess;
@property unsigned long long _forcedNetworkServiceType;
@property (copy) NSSet *_authenticatorStatusCodes;
@property (copy) NSString *_companionAppBundleIdentifier;
@property (copy) NSString *_tcpConnectionPoolName;
@property BOOL _forcesNewConnections;
@property BOOL _preventsIdleSleepOnceConnected;
@property BOOL _requiresPowerPluggedIn;
@property BOOL _shouldSkipPreferredClientCertificateLookup;
@property (copy) NSString *_sourceApplicationBundleIdentifier;
@property (copy) NSString *_sourceApplicationSecondaryIdentifier;
@property unsigned long long _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout;
@property BOOL _allowsExpensiveAccess;
@property BOOL _allowsPowerNapScheduling;
@property (copy) id<NSURLSessionAppleIDContext> _appleIDContext;
@property (copy) NSData *_sourceApplicationAuditTokenData;
@property long long _timingDataOptions;
@property BOOL _allowsIndefiniteConnections;
@property BOOL _allowsMultipathTCP;
@property BOOL _allowsResponseMonitoringDuringBodyTranmission;
@property BOOL _allowsTCPFastOpen;
@property BOOL _allowsTLSSessionTickets;
@property BOOL _onBehalfOfPairedDevice;
@property unsigned long long _customReadBufferSize;
@property double _customReadBufferTimeout;
@property BOOL _preventsSystemHTTPProxyAuthentication;
@property BOOL _allowsTLSSessionResumption;
@property BOOL _requiresSustainedDataDelivery;
@property BOOL _duetPreauthorized;
@property BOOL _clientIsNotExplicitlyDiscretionary;
@property (copy) NSString *_tlsTrustPinningPolicyName;
@property (copy) NSSet *_suppressedAutoAddedHTTPHeaders;
@property BOOL _requiresSecureHTTPSProxyConnection;
@property long long _expiredDNSBehavior;
@property BOOL _alwaysPerformDefaultTrustEvaluation;
@property BOOL _preventsAppSSO;
@property BOOL _allowsConstrainedNetworkAccess;
@property unsigned long long _multipathAlternatePort;
@property BOOL _reportsDataStalls;
@property BOOL _allowsWCA;
@property (copy) NSNumber *_maximumWatchCellularTransferSize;
@property (copy) NSString *_CTDataConnectionServiceType;
@property long long multipathServiceType;
@property BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
@property (copy) NSString *_connectionPoolName;
@property (copy) NSURL *_directoryForDownloadedFiles;

+ (id)immutableEffectiveConfigurationFromConfig:(id)a0;
+ (id)immutableEffectiveConfigurationFromSessionConfig:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)_socketStreamProperties;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)set_connectionCacheCellPurgeTimeout:(double)a0;
- (double)_connectionCacheCellPurgeTimeout;
- (void)set_socketStreamProperties:(id)a0;

@end
