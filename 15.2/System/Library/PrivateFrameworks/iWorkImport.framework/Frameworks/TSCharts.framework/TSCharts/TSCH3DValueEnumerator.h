@interface TSCH3DValueEnumerator : NSObject {
    struct ValueEnumerator { BOOL _forward; unsigned long long _index; unsigned long long _max; double _value; } _imp;
}

@property (readonly, nonatomic) double value;

- (id)nextObject;
- (unsigned long long)index;
- (id)enumerator;
- (void)setValue:(double)a0;
- (id).cxx_construct;
- (BOOL)isValid;
- (BOOL)isValidNonZero;

@end
