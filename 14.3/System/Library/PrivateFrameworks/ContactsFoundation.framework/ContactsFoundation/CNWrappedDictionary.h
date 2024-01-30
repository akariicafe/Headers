@class NSDictionary;

@interface CNWrappedDictionary : NSDictionary {
    NSDictionary *_underlyingDictionary;
}

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithDictionary:(id)a0;

@end
