@class NSDictionary;

@interface WLKSortedKeyDictionary : NSDictionary

@property (copy, nonatomic) NSDictionary *underlyingDictionary;

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (unsigned long long)count;

@end
