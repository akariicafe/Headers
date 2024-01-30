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

+ (void)setAllowsSpecificHTTPSCertificate:(id)a0 forHost:(id)a1;
+ (id)requestWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)a0;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)a0 forHost:(id)a1;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)a0;
+ (void)setDefaultTimeoutInterval:(double)a0;
+ (double)defaultTimeoutInterval;
+ (id)requestWithURL:(id)a0;

- (const struct __CFURL { } *)cfURL;
- (id)boundInterfaceIdentifier;
- (id)valueForHTTPHeaderField:(id)a0;
- (BOOL)_ignoreHSTS;
- (BOOL)_isIdempotent;
- (id)contentDispositionEncodingFallbackArray;
- (id)HTTPReferrer;
- (BOOL)_URLHasScheme:(id)a0;
- (BOOL)_schemeWasUpgradedDueToDynamicHSTS;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (id)_initWithInternal:(id)a0;
- (struct _CFURLRequest { } *)_CFURLRequest;
- (id)_startTimeoutDate;
- (id)initWithURL:(id)a0;
- (id)HTTPUserAgent;
- (id)_copyReplacingURLWithURL:(id)a0;
- (id)_propertyForKey:(id)a0;
- (BOOL)_needsNetworkTrackingPrevention;
- (BOOL)_requiresShortConnectionTimeout;
- (void)_removePropertyForKey:(id)a0;
- (id)HTTPContentType;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { } *)a0;
- (double)_payloadTransmissionTimeout;
- (id)HTTPExtraCookies;
- (unsigned long long)expectedWorkload;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_allProtocolProperties;
- (BOOL)_isNonAppInitiated;
- (BOOL)_preventHSTSStorage;
- (id)_trackerContext;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (double)_timeWindowDuration;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
- (double)_timeWindowDelay;
- (unsigned long long)hash;
- (void)dealloc;
- (void)_setProperty:(id)a0 forKey:(id)a1;
- (BOOL)_isKnownTracker;

@end
