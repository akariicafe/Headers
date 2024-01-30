@interface IOHIDObsoleteQueueClass : IOHIDQueueClass {
    struct IOHIDQueueInterface { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; } *_interface;
    void /* function */ *_eventCallback;
    void *_eventCallbackTarget;
    void *_eventCallbackRefcon;
}

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;
- (int)getNextEvent:(struct IOHIDEventStruct { int x0; unsigned int x1; int x2; struct UnsignedWide { unsigned int x0; unsigned int x1; } x3; unsigned int x4; void *x5; } *)a0;
- (int)setEventCallout:(void /* function */ *)a0 callbackTarget:(void *)a1 callbackRefcon:(void *)a2;

@end
