@interface TSCEValueContainer : NSObject {
    struct TSCEValue { union { struct { struct { unsigned long long w[2]; } _decimal; unsigned char _formatFake[24]; unsigned short _baseUnit; BOOL _isUnitlessZero; } DONT_USE_fakeTSCENumberValueStandIn; unsigned long long _buff[9]; } ; unsigned char _type; } mValue;
}

- (id).cxx_construct;
- (id)initWithValue:(struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })value;
- (void).cxx_destruct;

@end
