@interface _JEAtomicCounter : NSObject {
    _Atomic long long _value;
}

- (long long)decrement;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithInitialValue:(long long)a0;
- (id)init;
- (id)description;
- (long long)increment;

@end
