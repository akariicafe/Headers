@protocol ASDManagedRingBuffer;

@interface ASDRingBufferOutputStream : ASDStream {
    struct unique_ptr<ASDBufferList, std::default_delete<ASDBufferList>> { struct __compressed_pair<ASDBufferList *, std::default_delete<ASDBufferList>> { struct ASDBufferList *__value_; } __ptr_; } _bufferList;
}

@property (readonly, nonatomic) id<ASDManagedRingBuffer> ringBuffer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)startStream;
- (void)stopStream;
- (id)initWithDirection:(unsigned int)a0 withPlugin:(id)a1;
- (id)initWithRingBuffer:(id)a0 withPlugin:(id)a1;
- (void)setPhysicalFormat:(id)a0;
- (id /* block */)writeMixBlock;

@end
