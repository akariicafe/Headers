@class SCNFixedSizePage;

@interface SCNMTLBufferAllocatorSubBuffer : SCNMTLBuffer {
    SCNFixedSizePage *_parentPage;
}

- (id)initWithPage:(id)a0;
- (void)dealloc;

@end
