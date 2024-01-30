@interface MTLDebugIOHandle : MTLToolsIOHandle

- (unsigned long long)globalTraceObjectID;
- (void)dealloc;
- (long long)decompress:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2 stagingBuffer:(void *)a3 stagingBufferSize:(unsigned long long)a4;
- (unsigned long long)getHandleOffset:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (long long)read:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2 stagingBuffer:(void *)a3 stagingBufferSize:(unsigned long long)a4;
- (void *)readIntoStagingBuffer:(unsigned long long)a0 offset:(unsigned long long)a1 stagingBuffer:(void *)a2 stagingBufferSize:(unsigned long long)a3;
- (unsigned long long)stagingBufferSize:(unsigned long long)a0 offset:(unsigned long long)a1;

@end
