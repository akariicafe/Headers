@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (id)objectForKey:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;

@end
