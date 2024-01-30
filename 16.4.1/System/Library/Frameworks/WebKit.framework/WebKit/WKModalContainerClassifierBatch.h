@interface WKModalContainerClassifierBatch : NSObject <MLBatchProvider> {
    struct Vector<WTF::RetainPtr<WKModalContainerClassifierInput>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _inputs;
}

@property (readonly, nonatomic) long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithRawInputs:(void *)a0;

@end
