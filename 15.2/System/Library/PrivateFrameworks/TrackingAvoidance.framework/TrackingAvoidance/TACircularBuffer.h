@class NSMutableArray;

@interface TACircularBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)firstObject;
- (id)lastObject;
- (id)add:(id)a0;
- (id)firstObjectMatchingTest:(id /* block */)a0 withOptions:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)objectsMatchingPredicate:(id)a0;
- (id)removeLastObject;
- (id)description;
- (id)removeWithPredicate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)dropOldestElement;
- (unsigned long long)hash;
- (id)removeUntilFirstPredicateFail:(id)a0;
- (id)bufferCopy;
- (id)insert:(id)a0 at:(unsigned long long)a1;

@end
