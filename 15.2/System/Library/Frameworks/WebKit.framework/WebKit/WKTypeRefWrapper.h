@interface WKTypeRefWrapper : NSObject {
    struct WKRetainPtr<const void *> { void *m_ptr; } _object;
}

@property (readonly) void *object;

- (id)initWithObject:(void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
