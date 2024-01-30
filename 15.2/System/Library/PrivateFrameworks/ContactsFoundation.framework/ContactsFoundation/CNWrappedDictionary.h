@class NSDictionary;

@interface CNWrappedDictionary : NSDictionary {
    NSDictionary *_underlyingDictionary;
}

- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)count;

@end
