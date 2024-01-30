@class NSDictionary, NSEnumerator;

@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator {
    NSDictionary *_keyplaneCache;
    NSEnumerator *_nameEnum;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithKeyplaneCache:(id)a0;

@end
