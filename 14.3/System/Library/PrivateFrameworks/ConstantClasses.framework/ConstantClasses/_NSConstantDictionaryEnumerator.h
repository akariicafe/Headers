@interface _NSConstantDictionaryEnumerator : NSEnumerator {
    id *currentKey;
    unsigned long long capacity;
    unsigned long long keyIndex;
}

- (id)nextObject;
- (id)allObjects;
- (id)initWithFirstKeyPointer:(id *)a0 capacity:(unsigned long long)a1;

@end
