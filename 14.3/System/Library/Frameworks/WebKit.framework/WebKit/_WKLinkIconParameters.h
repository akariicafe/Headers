@class NSString, NSDictionary, NSURL, NSNumber;

@interface _WKLinkIconParameters : NSObject {
    struct RetainPtr<NSURL> { void *m_ptr; } _url;
    long long _iconType;
    struct RetainPtr<NSString> { void *m_ptr; } _mimeType;
    struct RetainPtr<NSNumber> { void *m_ptr; } _size;
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } _attributes;
}

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long iconType;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSNumber *size;
@property (readonly, copy, nonatomic) NSDictionary *attributes;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithLinkIcon:(const struct LinkIcon { struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x0; unsigned char x1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x2; struct Optional<unsigned int> { BOOL x0; union constexpr_storage_t<unsigned int> { unsigned char x0; unsigned int x1; } x1; } x3; struct Vector<std::__1::pair<WTF::String, WTF::String>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct pair<WTF::String, WTF::String> *x0; unsigned int x1; unsigned int x2; } x4; } *)a0;

@end
