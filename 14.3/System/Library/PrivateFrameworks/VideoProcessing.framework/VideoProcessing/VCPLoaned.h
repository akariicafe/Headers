@class VCPObjectPool;

@interface VCPLoaned : NSObject {
    VCPObjectPool *_pool;
}

@property (readonly, nonatomic) id object;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObject:(id)a0 fromPool:(id)a1;

@end
