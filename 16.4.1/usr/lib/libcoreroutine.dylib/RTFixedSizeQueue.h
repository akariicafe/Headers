@class NSMutableArray;

@interface RTFixedSizeQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)firstObject;
- (id)enqueueObject:(id)a0;
- (id)dequeueObject;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectAtIndex:(long long)a0;
- (id)lastObject;
- (void).cxx_destruct;

@end
