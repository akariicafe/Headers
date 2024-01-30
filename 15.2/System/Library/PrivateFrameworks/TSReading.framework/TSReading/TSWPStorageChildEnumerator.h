@class NSArray, TSWPStorage;

@interface TSWPStorageChildEnumerator : NSEnumerator {
    TSWPStorage *_storage;
    struct _NSRange { unsigned long long location; unsigned long long length; } _charRange;
    unsigned int _index;
    NSArray *_charOffsetArray;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
