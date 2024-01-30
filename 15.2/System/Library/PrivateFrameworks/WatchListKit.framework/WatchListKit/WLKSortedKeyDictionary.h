@class NSDictionary;

@interface WLKSortedKeyDictionary : NSDictionary

@property (copy, nonatomic) NSDictionary *underlyingDictionary;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;

@end
