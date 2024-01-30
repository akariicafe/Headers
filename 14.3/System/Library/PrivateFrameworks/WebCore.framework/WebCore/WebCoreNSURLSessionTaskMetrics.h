@class NSArray;

@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> { void *m_ptr; } _transactionMetrics;
}

@property (readonly, copy) NSArray *transactionMetrics;

- (id)_initWithMetrics:(const struct NetworkLoadMetrics { struct Seconds { double x0; } x0; struct Seconds { double x0; } x1; struct Seconds { double x0; } x2; struct Seconds { double x0; } x3; struct Seconds { double x0; } x4; struct Seconds { double x0; } x5; struct Seconds { double x0; } x6; struct Seconds { double x0; } x7; struct Seconds { double x0; } x8; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x16; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x17; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x18; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x19; unsigned char x20; struct HTTPHeaderMap { struct Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc> { struct CommonHeader *x0; unsigned int x1; unsigned int x2; } x0; struct Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc> { struct UncommonHeader *x0; unsigned int x1; unsigned int x2; } x1; } x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; } *)a0;
- (void).cxx_destruct;
- (id)transactionMetrics;
- (id).cxx_construct;

@end
