@interface WKDragSessionContext : NSObject {
    struct RetainPtr<NSMutableArray> { void *m_ptr; } _temporaryDirectories;
}

- (void)addTemporaryDirectory:(id)a0;
- (void)cleanUpTemporaryDirectories;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
