@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {
    struct **_keys;
    int _keysCount;
    int _counter;
}

- (id)nextObject;
- (void)dealloc;
- (id)allObjects;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary { } *)a0;

@end
