@interface OITSUIntegerKeyDictionaryKeyEnumerator : NSObject {
    long long **_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (void)dealloc;
- (long long)nextKey;
- (id)initWithIntegerKeyDictionary:(id)a0;

@end
