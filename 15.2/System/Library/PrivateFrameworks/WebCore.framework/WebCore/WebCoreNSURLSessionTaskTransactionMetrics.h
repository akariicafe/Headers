@class NSString, NSDate;

@interface WebCoreNSURLSessionTaskTransactionMetrics : NSObject {
    struct NetworkLoadMetrics { struct MonotonicTime { double m_value; } redirectStart; struct MonotonicTime { double m_value; } fetchStart; struct MonotonicTime { double m_value; } domainLookupStart; struct MonotonicTime { double m_value; } domainLookupEnd; struct MonotonicTime { double m_value; } connectStart; struct MonotonicTime { double m_value; } secureConnectionStart; struct MonotonicTime { double m_value; } connectEnd; struct MonotonicTime { double m_value; } requestStart; struct MonotonicTime { double m_value; } responseStart; struct MonotonicTime { double m_value; } responseEnd; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } protocol; unsigned short redirectCount; BOOL complete; BOOL cellular; BOOL expensive; BOOL constrained; BOOL multipath; BOOL isReusedConnection; BOOL failsTAOCheck; BOOL hasCrossOriginRedirect; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } remoteAddress; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } connectionIdentifier; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } tlsProtocol; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } tlsCipher; unsigned char priority; unsigned char privacyStance; struct HTTPHeaderMap { struct Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc> { struct CommonHeader *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_commonHeaders; struct Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc> { struct UncommonHeader *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_uncommonHeaders; } requestHeaders; unsigned long long requestHeaderBytesSent; unsigned long long responseHeaderBytesReceived; unsigned long long requestBodyBytesSent; unsigned long long responseBodyBytesReceived; unsigned long long responseBodyDecodedSize; } _metrics;
}

@property (readonly, copy) NSDate *fetchStartDate;
@property (readonly, copy) NSDate *domainLookupStartDate;
@property (readonly, copy) NSDate *domainLookupEndDate;
@property (readonly, copy) NSDate *connectStartDate;
@property (readonly, copy) NSDate *secureConnectionStartDate;
@property (readonly, copy) NSDate *connectEndDate;
@property (readonly, copy) NSDate *requestStartDate;
@property (readonly, copy) NSDate *responseStartDate;
@property (readonly, copy) NSDate *responseEndDate;
@property (readonly, copy) NSString *networkProtocolName;
@property (readonly, getter=isReusedConnection) BOOL reusedConnection;
@property (readonly, getter=isCellular) BOOL cellular;
@property (readonly, getter=isExpensive) BOOL expensive;
@property (readonly, getter=isConstrained) BOOL constrained;
@property (readonly, getter=isMultipath) BOOL multipath;
@property (readonly) int _privacyStance;

- (id)networkProtocolName;
- (BOOL)expensive;
- (BOOL)constrained;
- (int)_privacyStance;
- (id)fetchStartDate;
- (id)connectEndDate;
- (id)responseEndDate;
- (id)connectStartDate;
- (id)responseStartDate;
- (id)requestStartDate;
- (id)secureConnectionStartDate;
- (id)domainLookupStartDate;
- (id)domainLookupEndDate;
- (BOOL)multipath;
- (void).cxx_destruct;
- (BOOL)cellular;
- (id).cxx_construct;
- (id)_initWithMetrics:(const void *)a0;

@end
