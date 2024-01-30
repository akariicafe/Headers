@class AFBDictionary;

@interface AFBDictionaryEnumerator : NSEnumerator {
    AFBDictionary *_dict;
    unsigned long long _index;
}

- (id)nextObject;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
