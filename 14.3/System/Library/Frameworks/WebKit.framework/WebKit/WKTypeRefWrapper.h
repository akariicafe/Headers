@interface WKTypeRefWrapper : NSObject {
    struct WKRetainPtr<const void *> { void *m_ptr; } _object;
}

@property (readonly) void *object;

- (void).cxx_destruct;
- (id)initWithObject:(void *)a0;
- (id).cxx_construct;

@end
