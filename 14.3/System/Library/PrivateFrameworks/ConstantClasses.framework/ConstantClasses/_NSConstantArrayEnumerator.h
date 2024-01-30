@interface _NSConstantArrayEnumerator : NSEnumerator {
    id *objects;
    unsigned long long capacity;
    unsigned long long index;
}

- (id)nextObject;
- (id)allObjects;
- (id)initWithArray:(id *)a0 capacity:(unsigned long long)a1;

@end
