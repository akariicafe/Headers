@class NSString, NSDate;

@interface WebCoreNSURLSessionTaskTransactionMetrics : NSObject {
    struct NetworkLoadMetrics { struct Seconds { double m_value; } fetchStart; struct Seconds { double m_value; } domainLookupStart; struct Seconds { double m_value; } domainLookupEnd; struct Seconds { double m_value; } connectStart; struct Seconds { double m_value; } secureConnectionStart; struct Seconds { double m_value; } connectEnd; struct Seconds { double m_value; } requestStart; struct Seconds { double m_value; } responseStart; struct Seconds { double m_value; } responseEnd; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } protocol; BOOL complete; BOOL cellular; BOOL expensive; BOOL constrained; BOOL multipath; BOOL isReusedConnection; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } remoteAddress; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } connectionIdentifier; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } tlsProtocol; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } tlsCipher; unsigned char priority; struct HTTPHeaderMap { struct Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc> { struct CommonHeader *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_commonHeaders; struct Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc> { struct UncommonHeader *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_uncommonHeaders; } requestHeaders; unsigned long long requestHeaderBytesSent; unsigned long long responseHeaderBytesReceived; unsigned long long requestBodyBytesSent; unsigned long long responseBodyBytesReceived; unsigned long long responseBodyDecodedSize; } _metrics;
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

- (BOOL)multipath;
- (BOOL)cellular;
- (id)_initWithMetrics:(const struct NetworkLoadMetrics { struct Seconds { double x0; } x0; struct Seconds { double x0; } x1; struct Seconds { double x0; } x2; struct Seconds { double x0; } x3; struct Seconds { double x0; } x4; struct Seconds { double x0; } x5; struct Seconds { double x0; } x6; struct Seconds { double x0; } x7; struct Seconds { double x0; } x8; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x16; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x17; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x18; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x19; unsigned char x20; struct HTTPHeaderMap { struct Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc> { struct CommonHeader *x0; unsigned int x1; unsigned int x2; } x0; struct Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc> { struct UncommonHeader *x0; unsigned int x1; unsigned int x2; } x1; } x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; } *)a0;
- (BOOL)constrained;
- (void).cxx_destruct;
- (id)networkProtocolName;
- (id)fetchStartDate;
- (id)connectEndDate;
- (id)responseEndDate;
- (id)secureConnectionStartDate;
- (id)responseStartDate;
- (id)domainLookupStartDate;
- (id)connectStartDate;
- (id)requestStartDate;
- (id)domainLookupEndDate;
- (id).cxx_construct;
- (BOOL)expensive;

@end
