@interface WKDragSessionContext : NSObject {
    struct RetainPtr<NSMutableArray> { void *m_ptr; } _temporaryDirectories;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTemporaryDirectory:(id)a0;
- (void)cleanUpTemporaryDirectories;

@end
