@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
    struct WebSecurityOriginPrivate { } *_private;
    id<WebQuotaManager> _applicationCacheQuotaManager;
    id<WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)a0;

- (unsigned short)port;
- (id)host;
- (unsigned long long)usage;
- (struct SecurityOrigin { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x0; struct SecurityOriginData { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x1; struct Optional<unsigned short> { BOOL x0; union constexpr_storage_t<unsigned short> { unsigned char x0; unsigned short x1; } x1; } x2; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } *)_core;
- (unsigned long long)quota;
- (void)dealloc;
- (void)setQuota:(unsigned long long)a0;
- (id)databaseQuotaManager;
- (id)applicationCacheQuotaManager;
- (id)initWithURL:(id)a0;
- (id)toString;
- (BOOL)isEqual:(id)a0;
- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x0; struct SecurityOriginData { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x1; struct Optional<unsigned short> { BOOL x0; union constexpr_storage_t<unsigned short> { unsigned char x0; unsigned short x1; } x1; } x2; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } *)a0;
- (id)stringValue;
- (id)protocol;
- (id)databaseIdentifier;

@end
