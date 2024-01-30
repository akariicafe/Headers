@interface USKTimeCode : NSObject {
    struct SdfTimeCode { double _time; } _timeCode;
}

- (double)doubleValue;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithDouble:(double)a0;
- (BOOL)isEqual:(id)a0;
- (struct SdfTimeCode { double x0; })sdfTimeCode;
- (id)initWithSdfTimeCode:(struct SdfTimeCode { double x0; })a0;

@end
