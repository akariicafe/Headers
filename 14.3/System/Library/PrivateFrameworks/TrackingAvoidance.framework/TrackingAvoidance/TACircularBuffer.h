@class NSMutableArray;

@interface TACircularBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)add:(id)a0;
- (id)removeLastObject;
- (id)firstObject;
- (id)lastObject;
- (void).cxx_destruct;
- (id)insert:(id)a0 at:(unsigned long long)a1;
- (id)dropOldestElement;
- (id)firstObjectMatchingTest:(id /* block */)a0 withOptions:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)bufferCopy;
- (id)removeWithPredicate:(id)a0;
- (unsigned long long)count;
- (id)objectsMatchingPredicate:(id)a0;
- (id)removeUntilFirstPredicateFail:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
