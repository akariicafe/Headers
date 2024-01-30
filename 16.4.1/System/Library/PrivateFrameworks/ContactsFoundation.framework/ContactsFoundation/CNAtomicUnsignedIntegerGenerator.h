@interface CNAtomicUnsignedIntegerGenerator : NSObject {
    _Atomic long long _n;
}

- (unsigned long long)nextUnsignedInteger;
- (id)init;
- (id)description;

@end
