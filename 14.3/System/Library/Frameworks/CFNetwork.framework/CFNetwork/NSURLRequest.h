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
@property (readonly) struct URLRequest { void /* function */ **x0; struct __CFURL *x1; unsigned long long x2; double x3; struct __CFURL *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct HTTPRequest *x7; struct Flags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; } x8; struct __CFDictionary *x9; struct __CFArray *x10; long long x11; unsigned long long x12; int x13; struct __CFString *x14; unsigned long long x15; double x16; double x17; double x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; double x24; struct __CFDictionary *x25; struct unique_ptr<_CFHSTSPolicy, Deleter_CFRelease> { struct __compressed_pair<_CFHSTSPolicy *, Deleter_CFRelease> { struct _CFHSTSPolicy *x0; } x0; } x26; int x27; int x28; struct __CFURLStorageSession *x29; } *_inner;
@property (readonly, getter=isKnownHTTP3Capable) BOOL knownHTTP3Capable;
@property (readonly, copy) NSURL *URL;
@property (readonly) unsigned long long cachePolicy;
@property (readonly) double timeoutInterval;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (readonly) unsigned long long networkServiceType;
@property (readonly) BOOL allowsCellularAccess;
@property (readonly) BOOL allowsExpensiveNetworkAccess;
@property (readonly) BOOL allowsConstrainedNetworkAccess;

+ (id)requestWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)a0 forHost:(id)a1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)a0;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)a0;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)a0 forHost:(id)a1;
+ (id)requestWithURL:(id)a0;
+ (double)defaultTimeoutInterval;
+ (void)setDefaultTimeoutInterval:(double)a0;

- (const struct __CFURL { } *)cfURL;
- (id)initWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
- (BOOL)_ignoreHSTS;
- (id)contentDispositionEncodingFallbackArray;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (BOOL)_schemeWasUpgradedDueToDynamicHSTS;
- (id)init;
- (BOOL)_isIdempotent;
- (id)_allHTTPHeaderFieldsAsArrays;
- (BOOL)_URLHasScheme:(id)a0;
- (id)_copyReplacingURLWithURL:(id)a0;
- (double)_payloadTransmissionTimeout;
- (id)HTTPReferrer;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { } *)a0;
- (void)_removePropertyForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _CFURLRequest { } *)_CFURLRequest;
- (id)HTTPUserAgent;
- (id)_initWithInternal:(id)a0;
- (double)_timeWindowDelay;
- (id)HTTPContentType;
- (id)_startTimeoutDate;
- (id)_propertyForKey:(id)a0;
- (void)dealloc;
- (BOOL)_requiresShortConnectionTimeout;
- (BOOL)_preventHSTSStorage;
- (id)HTTPExtraCookies;
- (unsigned long long)expectedWorkload;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)_setProperty:(id)a0 forKey:(id)a1;
- (id)initWithURL:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)valueForHTTPHeaderField:(id)a0;
- (double)_timeWindowDuration;
- (id)boundInterfaceIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
