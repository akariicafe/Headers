@class NSArray;

@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> { void *m_ptr; } _transactionMetrics;
}

@property (readonly, copy) NSArray *transactionMetrics;

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (id)transactionMetrics;
- (id)_initWithMetrics:(void *)a0;

@end
