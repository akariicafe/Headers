@class NSURL;

@interface WKSecureCodingURLWrapper : NSURL <NSSecureCoding> {
    struct RetainPtr<NSURL> { void *m_ptr; } m_wrappedURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *wrappedURL;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
