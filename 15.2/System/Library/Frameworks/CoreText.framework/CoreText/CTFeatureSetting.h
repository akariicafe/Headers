@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (BOOL)isEqualToDictionary:(id)a0;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)count;
- (void)dealloc;

@end
