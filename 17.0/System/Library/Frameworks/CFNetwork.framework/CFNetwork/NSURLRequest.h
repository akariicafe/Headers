@class NSString, NSDictionary, NSData, NSURL, NSInputStream, NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    NSURLRequestInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *HTTPMethod;
@property (readonly, copy) NSDictionary *allHTTPHeaderFields;
@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly) BOOL HTTPShouldHandleCookies;
@property (readonly) BOOL HTTPShouldUsePipelining;
@property (readonly) id HTTPPropertyList;
@property (readonly) void *_inner;
@property (readonly, copy) NSURL *URL;
@property (readonly) unsigned long long cachePolicy;
@property (readonly) double timeoutInterval;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (readonly) unsigned long long networkServiceType;
@property (readonly) BOOL allowsCellularAccess;
@property (readonly) BOOL allowsExpensiveNetworkAccess;
@property (readonly) BOOL allowsConstrainedNetworkAccess;
@property (readonly) BOOL assumesHTTP3Capable;
@property (readonly) unsigned long long attribution;
@property (readonly) BOOL requiresDNSSECValidation;

+ (id)requestWithURL:(id)a0;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)a0;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)a0;
+ (double)defaultTimeoutInterval;
+ (id)requestWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)a0 forHost:(id)a1;
+ (void)setAllowsSpecificHTTPSCertificate:(id)a0 forHost:(id)a1;
+ (void)setDefaultTimeoutInterval:(double)a0;

- (id)initWithURL:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)_isWebSearchContent;
- (void)_setProperty:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_privacyProxyFailClosed;
- (BOOL)_privacyProxyFailClosedForUnreachableHosts;
- (BOOL)_prohibitPrivacyProxy;
- (double)_timeWindowDelay;
- (BOOL)_privacyProxyFailClosedForUnreachableNonMainHosts;
- (BOOL)_isKnownTracker;
- (id)description;
- (BOOL)_useEnhancedPrivacyMode;
- (double)_timeWindowDuration;
- (unsigned long long)_allowedProtocolTypes;
- (id)valueForHTTPHeaderField:(id)a0;
- (BOOL)_blockTrackers;
- (id)_trackerContext;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_failInsecureLoadWithHTTPSDNSRecord;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_allHTTPHeaderFieldsAsArrays;
- (double)_payloadTransmissionTimeout;
- (id)_startTimeoutDate;
- (id)contentDispositionEncodingFallbackArray;
- (id)HTTPExtraCookies;
- (id)HTTPContentType;
- (id)HTTPReferrer;
- (id)HTTPUserAgent;
- (BOOL)_needsNetworkTrackingPrevention;
- (BOOL)_requiresShortConnectionTimeout;
- (struct _CFURLRequest { } *)_CFURLRequest;
- (BOOL)_URLHasScheme:(id)a0;
- (id)_allProtocolProperties;
- (BOOL)_allowPrivateAccessTokensForThirdParty;
- (id)_copyReplacingURLWithURL:(id)a0;
- (BOOL)_ignoreHSTS;
- (id)_initWithInternal:(id)a0;
- (BOOL)_isIdempotent;
- (BOOL)_isNonAppInitiated;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (BOOL)_preventHSTSStorage;
- (id)_propertyForKey:(id)a0;
- (void)_removePropertyForKey:(id)a0;
- (BOOL)_schemeWasUpgradedDueToDynamicHSTS;
- (id)boundInterfaceIdentifier;
- (struct __CFURL { } *)cfURL;
- (unsigned long long)expectedWorkload;
- (id)initWithHTTPPropertyList:(id)a0;

@end
