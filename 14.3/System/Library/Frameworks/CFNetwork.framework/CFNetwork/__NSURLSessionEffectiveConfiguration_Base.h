@class NSURLCredentialStorage, NSString, NSArray, NSData, NSSet, NSHTTPCookieStorage, NSDictionary, NSURL, NSURLCache, NSURLSessionConfiguration, NSNumber, _NSHTTPAlternativeServicesStorage;
@protocol NSURLSessionAppleIDContext;

@interface __NSURLSessionEffectiveConfiguration_Base : NSObject <NSSecureCoding, NSCopying> {
    NSURLSessionConfiguration *_config;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain) NSHTTPCookieStorage *HTTPCookieStorage;
@property (readonly, retain) NSURLCache *URLCache;
@property (readonly, copy) NSDictionary *HTTPAdditionalHeaders;
@property (readonly, retain) NSURLCredentialStorage *URLCredentialStorage;
@property (readonly, copy) NSArray *protocolClasses;
@property (readonly) double timeoutIntervalForResource;
@property (readonly) BOOL allowsCellularAccess;
@property (readonly, getter=isDiscretionary) BOOL discretionary;
@property (readonly) BOOL shouldUseExtendedBackgroundIdleMode;
@property (readonly) BOOL waitsForConnectivity;
@property (readonly) BOOL allowsExpensiveNetworkAccess;
@property (readonly) BOOL allowsConstrainedNetworkAccess;
@property (readonly) unsigned long long _forcedNetworkServiceType;
@property (readonly, copy) NSSet *_authenticatorStatusCodes;
@property (readonly, copy) NSString *_companionAppBundleIdentifier;
@property (readonly, copy) NSString *_tcpConnectionPoolName;
@property (readonly) BOOL _forcesNewConnections;
@property (readonly) BOOL _preventsIdleSleepOnceConnected;
@property (readonly) BOOL _requiresPowerPluggedIn;
@property (readonly) BOOL _shouldSkipPreferredClientCertificateLookup;
@property (readonly, copy) NSString *_sourceApplicationBundleIdentifier;
@property (readonly, copy) NSString *_sourceApplicationSecondaryIdentifier;
@property (readonly) unsigned long long _TCPAdaptiveReadTimeout;
@property (readonly) unsigned long long _TCPAdaptiveWriteTimeout;
@property (readonly) BOOL _allowsExpensiveAccess;
@property (readonly) BOOL _allowsPowerNapScheduling;
@property (readonly, copy) id<NSURLSessionAppleIDContext> _appleIDContext;
@property (readonly, copy) NSData *_sourceApplicationAuditTokenData;
@property (readonly) long long _timingDataOptions;
@property (readonly) BOOL _allowsIndefiniteConnections;
@property (readonly) BOOL _allowsMultipathTCP;
@property (readonly) BOOL _allowsResponseMonitoringDuringBodyTranmission;
@property (readonly) BOOL _allowsTCPFastOpen;
@property (readonly) BOOL _allowsTLSSessionTickets;
@property (readonly) BOOL _onBehalfOfPairedDevice;
@property (readonly) unsigned long long _customReadBufferSize;
@property (readonly) double _customReadBufferTimeout;
@property (readonly) BOOL _preventsSystemHTTPProxyAuthentication;
@property (readonly) BOOL _allowsTLSSessionResumption;
@property (readonly) BOOL _requiresSustainedDataDelivery;
@property (readonly) BOOL _duetPreauthorized;
@property (readonly) BOOL _clientIsNotExplicitlyDiscretionary;
@property (readonly, copy) NSString *_tlsTrustPinningPolicyName;
@property (readonly, copy) NSSet *_suppressedAutoAddedHTTPHeaders;
@property (readonly) BOOL _requiresSecureHTTPSProxyConnection;
@property (readonly) long long _expiredDNSBehavior;
@property (readonly) BOOL _alwaysPerformDefaultTrustEvaluation;
@property (readonly) BOOL _preventsAppSSO;
@property (readonly) BOOL _allowsConstrainedNetworkAccess;
@property (readonly) unsigned long long _multipathAlternatePort;
@property (readonly) BOOL _reportsDataStalls;
@property (readonly) BOOL _allowsTLSFalseStart;
@property (readonly) BOOL _allowsWCA;
@property (readonly, copy) NSNumber *_maximumWatchCellularTransferSize;
@property (readonly, copy) NSString *_CTDataConnectionServiceType;
@property (readonly) long long multipathServiceType;
@property (readonly) BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
@property (readonly, copy) NSString *_connectionPoolName;
@property (readonly, copy) NSURL *_directoryForDownloadedFiles;
@property (readonly) BOOL _allowsReachabilityCheck;
@property (readonly) BOOL _allowsHTTP3;
@property (readonly, retain) _NSHTTPAlternativeServicesStorage *_alternativeServicesStorage;

- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_initWithConfiguration:(id)a0;
- (const void *)_copyAttribute:(struct __CFString { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_sessionConfiguration;
- (void)encodeWithCoder:(id)a0;

@end
