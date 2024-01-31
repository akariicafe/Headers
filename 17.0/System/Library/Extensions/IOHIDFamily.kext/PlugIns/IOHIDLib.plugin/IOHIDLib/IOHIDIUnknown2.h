@interface IOHIDIUnknown2 : NSObject {
    struct IUnknownVTbl { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; } *_vtbl;
}

- (id)init;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;
- (void)dealloc;

@end
