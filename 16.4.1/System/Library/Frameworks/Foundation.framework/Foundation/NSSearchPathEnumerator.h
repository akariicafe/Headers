@interface NSSearchPathEnumerator : NSEnumerator {
    long long state;
    unsigned long long directory;
    unsigned long long domainMask;
}

- (id)nextObject;
- (id)initWithDirectory:(unsigned long long)a0 domains:(unsigned long long)a1;

@end
