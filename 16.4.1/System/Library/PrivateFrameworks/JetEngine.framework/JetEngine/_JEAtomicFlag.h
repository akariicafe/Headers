@interface _JEAtomicFlag : NSObject {
    _Atomic BOOL _value;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithInitialValue:(BOOL)a0;
- (id)init;
- (id)description;
- (BOOL)compareWithValue:(BOOL)a0 andExchangeWithValue:(BOOL)a1;

@end
