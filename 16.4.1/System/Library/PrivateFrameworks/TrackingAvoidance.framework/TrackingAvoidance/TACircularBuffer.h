@class NSMutableArray;

@interface TACircularBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)add:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)removeLastObject;
- (id)firstObject;
- (id)dropOldestElement;
- (id)initWithCoder:(id)a0;
- (unsigned long long)count;
- (id)getObjectAtIndex:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)removeUntilFirstPredicateFail:(id)a0;
- (unsigned long long)hash;
- (id)insert:(id)a0 at:(unsigned long long)a1;
- (id)lastObject;
- (id)objectsMatchingPredicate:(id)a0;
- (id)description;
- (id)bufferCopy;
- (id)removeWithPredicate:(id)a0;
- (void).cxx_destruct;
- (id)firstObjectMatchingTest:(id /* block */)a0 withOptions:(unsigned long long)a1;

@end
