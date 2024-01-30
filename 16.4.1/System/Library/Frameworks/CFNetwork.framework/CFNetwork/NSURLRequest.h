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
- (BOOL)_privacyProxyFailClosed;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { } *)a0;
- (BOOL)_prohibitPrivacyProxy;
- (id)initWithCoder:(id)a0;
- (id)valueForHTTPHeaderField:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_trackerContext;
- (id)initWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
- (double)_timeWindowDelay;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isKnownTracker;
- (void)_setProperty:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)_privacyProxyFailClosedForUnreachableNonMainHosts;
- (double)_timeWindowDuration;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)HTTPExtraCookies;
- (id)HTTPReferrer;
- (id)HTTPUserAgent;
- (BOOL)_needsNetworkTrackingPrevention;
- (id)HTTPContentType;
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
- (double)_payloadTransmissionTimeout;
- (BOOL)_preventHSTSStorage;
- (id)_propertyForKey:(id)a0;
- (void)_removePropertyForKey:(id)a0;
- (BOOL)_schemeWasUpgradedDueToDynamicHSTS;
- (id)_startTimeoutDate;
- (id)boundInterfaceIdentifier;
- (const struct __CFURL { } *)cfURL;
- (id)contentDispositionEncodingFallbackArray;
- (unsigned long long)expectedWorkload;

@end
