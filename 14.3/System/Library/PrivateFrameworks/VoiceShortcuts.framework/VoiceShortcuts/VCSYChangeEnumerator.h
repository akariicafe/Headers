@class NSEnumerator;

@interface VCSYChangeEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    unsigned long long _count;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithLazyArray:(id)a0;

@end
