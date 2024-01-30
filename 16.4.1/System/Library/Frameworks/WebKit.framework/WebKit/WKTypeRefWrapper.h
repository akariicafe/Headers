@interface WKTypeRefWrapper : NSObject {
    struct WKRetainPtr<const void *> { void *m_ptr; } _object;
}

@property (readonly) void *object;

- (id)initWithObject:(void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
