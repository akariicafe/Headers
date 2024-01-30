@class NSMutableArray;

@interface VCPObjectPool : NSObject {
    id /* block */ _allocator;
    NSMutableArray *_objects;
}

+ (id)objectPoolWithAllocator:(id /* block */)a0;

- (id)getObject;
- (void).cxx_destruct;
- (void)returnObject:(id)a0;
- (id)initWithAllocator:(id /* block */)a0;

@end
