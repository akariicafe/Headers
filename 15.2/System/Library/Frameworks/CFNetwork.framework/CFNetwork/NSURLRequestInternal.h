@interface NSURLRequestInternal : NSObject <NSCopying> {
    struct URLRequest { void /* function */ **_vptr$CoreLoggable; struct __CFURL *fURL; unsigned long long fCachePolicy; double fTimeout; struct __CFURL *fMainDocumentURL; struct __CFDictionary *fProtocolProperties; struct __CFDictionary *fProxyDict; struct HTTPRequest *fHTTPRequest; struct Flags { unsigned char _flag_SHOULD_HANDLE_HTTP_COOKIES : 1; unsigned char _flag_IS_MUTABLE : 1; unsigned char _flag_SHOULD_START_SYNCHRONOUSLY : 1; unsigned char _flag_ALLOW_CELLULAR : 1; unsigned char _flag_PREVENTSIDLESYSTEMSLEEP : 1; unsigned char _flag_SET_EXPLICIT_COOKIE_ACCEPTANCE_POLICY : 1; unsigned char _flag_SET_EXPLICIT_SHOULD_HANDLE_COOKIES : 1; unsigned char _flag_SET_EXPLICIT_NETWORK_SERVICE_TYPE : 1; unsigned char _flag_SET_EXPLICIT_ALLOWS_CELLULAR : 1; unsigned char _flag_SET_EXPLICIT_PREVENTS_IDLE_SYSTEM_SLEEP : 1; unsigned char _flag_SET_EXPLICIT_BOUND_INTERFACE_IDENTIFIER : 1; unsigned char _flag_SET_EXPLICIT_SHOULD_PIPELINE : 1; unsigned char _flag_SET_EXPLICIT_CACHE_POLICY : 1; unsigned char _flag_SET_EXPLICIT_TIMEOUT : 1; unsigned char _flag_SET_EXPLICIT_PROXY_DICT : 1; unsigned char _flag_SET_EXPLICIT_SSL_PROPERTIES : 1; unsigned char _flag_SET_EXPLICIT_CONTENT_DISPOSITION_HEADER_ENCODING_FALLBACK_ARRAY : 1; unsigned char _flag_SET_EXPLICIT_SHOULD_START_SYNCHRONOUSLY : 1; } fFlags; struct __CFDictionary *fSSLProps; struct __CFArray *fContentDispositionHeaderEncodingFallbackArray; long long fRequestPriority; unsigned long long fAllowedProtocolTypes; int fNetworkServiceType; struct __CFString *fBoundInterfaceIdentifier; struct __CFString *fTrackerContext; unsigned long long fExpectedWorkload; double fTimeWindowDelay; double fTimeWindowDuration; double fStartTimeoutTime; unsigned char fRequiresShortConnectionTimeout; unsigned char fPreventHSTSStorage; unsigned char fIgnoreHSTS; unsigned char fSchemeWasUpgradedDueToDynamicHSTS; unsigned char fAssumesHTTP3Capable; unsigned char fKnownTracker; unsigned char fPrivacyProxyFailClosed; unsigned long long fAttribution; double fPayloadTransmissionTimeout; struct __CFDictionary *fATSOverrides; struct unique_ptr<_CFHSTSPolicy, Deleter_CFRelease> { struct __compressed_pair<_CFHSTSPolicy *, Deleter_CFRelease> { struct _CFHSTSPolicy *__value_; } __ptr_; } fHSTSPolicy; int fAllowsExpensiveNetworkAccess; int fAllowsConstrainedNetworkAccess; struct __CFURLStorageSession *_explicitStorageSession; } _request;
}

@property (readonly) void *_inner;

- (void *)_inner;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMessage:(struct __CFHTTPMessage { } *)a0 bodyParts:(struct __CFArray { } *)a1 cachePolicy:(unsigned long long)a2 timeout:(double)a3 mainDocumentURL:(struct __CFURL { } *)a4 mutable:(unsigned char)a5;
- (unsigned long long)hash;
- (void)dealloc;
- (id).cxx_construct;

@end
