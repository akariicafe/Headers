@interface _NASetContainer : NSObject

@property (retain, nonatomic) id object;
@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) id /* block */ comparator;
@property (copy, nonatomic) id /* block */ hashGenerator;

+ (id)containerWithObject:(id)a0 atIndex:(unsigned long long)a1 comparator:(id /* block */)a2 hashGenerator:(id /* block */)a3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
