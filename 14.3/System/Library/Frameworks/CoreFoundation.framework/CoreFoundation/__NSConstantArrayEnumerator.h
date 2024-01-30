@class NSConstantArray;

@interface __NSConstantArrayEnumerator : NSEnumerator {
    NSConstantArray *_underlyingArray;
    unsigned long long _index;
}

- (id)initWithConstantArray:(id)a0;
- (id)nextObject;
- (id)allObjects;

@end
