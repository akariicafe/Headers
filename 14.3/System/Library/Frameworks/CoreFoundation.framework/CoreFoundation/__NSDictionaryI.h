@interface __NSDictionaryI : NSDictionary {
    unsigned long _used : 57;
    unsigned char _copyKeys : 1;
    unsigned char _szidx : 6;
    id _list[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)keysOfEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (void)__apply:(void /* function */ *)a0 context:(void *)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)keyOfEntryWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)_cfMutableCopy;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (double)_clumpingInterestingThreshold;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)count;
- (double)_clumpingFactor;

@end
