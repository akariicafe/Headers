@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {
    struct **_keys;
    int _keysCount;
    int _counter;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary { } *)a0;
- (id)allObjects;

@end
