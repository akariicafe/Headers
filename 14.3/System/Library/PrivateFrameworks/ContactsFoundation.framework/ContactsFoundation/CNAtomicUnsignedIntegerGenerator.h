@interface CNAtomicUnsignedIntegerGenerator : NSObject {
    _Atomic long long _n;
}

- (id)init;
- (unsigned long long)nextUnsignedInteger;
- (id)description;

@end
