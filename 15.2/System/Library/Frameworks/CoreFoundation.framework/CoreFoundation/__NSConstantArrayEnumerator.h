@class NSConstantArray;

@interface __NSConstantArrayEnumerator : NSEnumerator {
    NSConstantArray *_underlyingArray;
    unsigned long long _index;
}

- (id)nextObject;
- (id)initWithConstantArray:(id)a0;
- (id)allObjects;

@end
