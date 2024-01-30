@interface _PFResultObjectKeyEnumerator : NSEnumerator {
    id _target;
    const id *_keys;
    unsigned long long *_referenceItems;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    unsigned long long _index;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithArray:(const id *)a0 forTarget:(id)a1 withReferenceValues:(unsigned long long *)a2 andRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
