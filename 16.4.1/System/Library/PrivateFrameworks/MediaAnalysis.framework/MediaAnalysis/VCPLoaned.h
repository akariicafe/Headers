@class VCPObjectPool;

@interface VCPLoaned : NSObject {
    VCPObjectPool *_pool;
}

@property (readonly, nonatomic) id object;

- (id)initWithObject:(id)a0 fromPool:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
