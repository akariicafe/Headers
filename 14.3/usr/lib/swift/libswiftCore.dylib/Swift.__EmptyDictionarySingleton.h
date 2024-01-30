@interface Swift.__EmptyDictionarySingleton : Swift.__RawDictionaryStorage <Swift._NSDictionaryCore>

@property (nonatomic, readonly) long long count;

- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(long long)a2;
- (id)objectForKey:(id)a0;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(long long)a2;
- (id)keyEnumerator;
- (id)copyWithZone:(void *)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(void *)a1 count:(long long)a2;

@end
