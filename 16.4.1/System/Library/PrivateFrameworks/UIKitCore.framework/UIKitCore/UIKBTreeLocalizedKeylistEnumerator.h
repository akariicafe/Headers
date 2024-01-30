@class NSDictionary, NSEnumerator;

@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator {
    NSDictionary *_keyplaneCache;
    NSEnumerator *_nameEnum;
}

- (id)nextObject;
- (id)initWithKeyplaneCache:(id)a0;
- (void).cxx_destruct;

@end
