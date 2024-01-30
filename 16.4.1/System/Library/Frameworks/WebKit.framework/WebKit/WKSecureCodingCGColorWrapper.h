@interface WKSecureCodingCGColorWrapper : NSObject <NSSecureCoding> {
    struct RetainPtr<CGColor *> { void *m_ptr; } m_wrappedColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGColor { } *wrappedColor;

- (id)initWithCGColor:(struct CGColor { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
