@interface TSCH3DValueEnumerator : NSObject {
    struct ValueEnumerator { BOOL _forward; unsigned long long _index; unsigned long long _max; double _value; } _imp;
}

@property (readonly, nonatomic) double value;

- (id)nextObject;
- (id)enumerator;
- (id).cxx_construct;
- (unsigned long long)index;
- (BOOL)isValid;
- (void)setValue:(double)a0;
- (BOOL)isValidNonZero;

@end
