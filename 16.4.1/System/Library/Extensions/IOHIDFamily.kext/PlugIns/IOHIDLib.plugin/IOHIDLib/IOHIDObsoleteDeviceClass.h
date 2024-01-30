@interface IOHIDObsoleteDeviceClass : IOHIDDeviceClass {
    struct IOHIDDeviceInterface122 { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; } *_interface;
    struct IONotificationPort { } *_notifyPort;
    unsigned int _notification;
    void /* function */ *_removalCallback;
    void *_removalTarget;
    void *_removalRefcon;
    void /* function */ *_reportCallback;
    void *_reportCallbackTarget;
    void *_reportCallbackRefcon;
}

- (struct IOHIDQueueInterface **)allocQueue;
- (int)copyMatchingElements:(struct __CFDictionary { } *)a0 element:(const struct __CFArray **)a1;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;
- (int)start:(id)a0 service:(unsigned int)a1;
- (int)setRemovalCallback:(void /* function */ *)a0 removalTarget:(void *)a1 removalRefcon:(void *)a2;
- (void)dealloc;
- (int)setElementValue:(unsigned int)a0 value:(struct IOHIDEventStruct { int x0; unsigned int x1; int x2; struct UnsignedWide { unsigned int x0; unsigned int x1; } x3; unsigned int x4; void *x5; } *)a1;
- (int)getElementValue:(unsigned int)a0 value:(struct IOHIDEventStruct { int x0; unsigned int x1; int x2; struct UnsignedWide { unsigned int x0; unsigned int x1; } x3; unsigned int x4; void *x5; } *)a1 options:(unsigned int)a2;
- (id)init;
- (struct IOHIDOutputTransactionInterface **)allocOutputTransaction;
- (int)setInterruptReportHandlerCallback:(void *)a0 reportBufferSize:(unsigned int)a1 callback:(void /* function */ *)a2 callbackTarget:(void *)a3 callbackRefcon:(void *)a4;

@end
