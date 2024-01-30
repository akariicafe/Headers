@interface TSCH3DValueEnumerator : NSObject {
    struct ValueEnumerator { BOOL mForward; unsigned long long mIndex; unsigned long long mMax; double mValue; } mImp;
}

@property (readonly, nonatomic) double value;

- (unsigned long long)index;
- (BOOL)isValid;
- (id).cxx_construct;
- (id)nextObject;
- (id)enumerator;
- (void)setValue:(double)a0;
- (BOOL)isValidNonZero;

@end
