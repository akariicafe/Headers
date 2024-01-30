@class NSMutableArray, IOHIDDeviceClass;

@interface IOHIDTransactionClass : IOHIDIUnknown2 {
    struct IOHIDDeviceTransactionInterface { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; } *_interface;
    unsigned int _direction;
    NSMutableArray *_elements;
    IOHIDDeviceClass *_device;
}

- (id)initWithDevice:(id)a0;
- (int)setDirection:(unsigned int)a0;
- (int)removeElement:(struct __IOHIDElement { } *)a0;
- (int)getAsyncEventSource:(const void **)a0;
- (int)addElement:(struct __IOHIDElement { } *)a0;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;
- (void)dealloc;
- (void)setDevice:(id)a0;
- (int)clear;
- (id)device;
- (void).cxx_destruct;
- (int)commit:(void *)a0 timeout:(unsigned int)a1 callback:(void /* function */ *)a2 options:(unsigned int)a3;
- (int)containsElement:(struct __IOHIDElement { } *)a0 value:(char *)a1;
- (int)getDirection:(unsigned int *)a0;
- (int)getValue:(struct __IOHIDElement { } *)a0 value:(struct __IOHIDValue **)a1 options:(unsigned int)a2;
- (int)setValue:(struct __IOHIDElement { } *)a0 value:(struct __IOHIDValue { } *)a1 options:(unsigned int)a2;

@end
