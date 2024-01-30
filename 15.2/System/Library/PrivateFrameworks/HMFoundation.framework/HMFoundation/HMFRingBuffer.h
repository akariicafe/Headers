@class NSMutableArray;

@interface HMFRingBuffer : HMFObject

@property (readonly) unsigned long long capacity;
@property (readonly) NSMutableArray *buffer;

- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;

@end
