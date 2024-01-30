@interface IOHIDOutputTransactionClass : IOHIDTransactionClass {
    struct IOHIDOutputTransactionInterface { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; } *_outputInterface;
}

- (id)initWithDevice:(id)a0;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;
- (void)dealloc;
- (int)getElementValue:(unsigned int)a0 value:(struct IOHIDEventStruct { int x0; unsigned int x1; int x2; struct UnsignedWide { unsigned int x0; unsigned int x1; } x3; unsigned int x4; void *x5; } *)a1 options:(unsigned int)a2;
- (int)setElementValue:(unsigned int)a0 value:(struct IOHIDEventStruct { int x0; unsigned int x1; int x2; struct UnsignedWide { unsigned int x0; unsigned int x1; } x3; unsigned int x4; void *x5; } *)a1 options:(unsigned int)a2;

@end
