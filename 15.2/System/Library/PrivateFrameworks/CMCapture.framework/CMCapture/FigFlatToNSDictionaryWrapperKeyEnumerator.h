@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {
    struct **_keys;
    int _keysCount;
    int _counter;
}

- (id)nextObject;
- (id)allObjects;
- (void)dealloc;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary { } *)a0;

@end
