@interface WKDragSessionContext : NSObject {
    struct RetainPtr<NSMutableArray> { void *m_ptr; } _temporaryDirectories;
}

- (void).cxx_destruct;
- (void)addTemporaryDirectory:(id)a0;
- (void)cleanUpTemporaryDirectories;
- (id).cxx_construct;

@end
