@class NSMutableDictionary, NSTimer, NSMutableSet, NSMutableArray;

@interface IOHIDUPSClass : IOHIDPlugin {
    struct IOUPSPlugInInterface_v140 { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; } *_ups;
    struct IOHIDDeviceTimeStampedDeviceInterface **_device;
    struct IOHIDDeviceQueueInterface **_queue;
    struct IOHIDDeviceTransactionInterface **_transaction;
    NSMutableDictionary *_properties;
    NSMutableSet *_capabilities;
    NSMutableDictionary *_upsEvent;
    NSMutableDictionary *_upsUpdatedEvent;
    NSMutableDictionary *_debugInformation;
    struct { NSMutableArray *input; NSMutableArray *output; NSMutableArray *feature; } _elements;
    NSMutableArray *_commandElements;
    NSMutableArray *_eventElements;
    void /* function */ *_eventCallback;
    void *_eventTarget;
    void *_eventRefcon;
    NSTimer *_timer;
    struct __CFRunLoopSource { } *_runLoopSource;
}

- (void)valueAvailableCallback:(int)a0;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;
- (int)start:(id)a0 service:(unsigned int)a1;
- (void)dealloc;
- (int)getCapabilities:(const struct __CFSet **)a0;
- (int)stop;
- (id)init;
- (void)parseProperties:(id)a0;
- (int)probe:(id)a0 service:(unsigned int)a1 outScore:(int *)a2;
- (void).cxx_destruct;
- (int)sendCommand:(id)a0;
- (BOOL)updateEvent;
- (int)setEventCallback:(void /* function */ *)a0 target:(void *)a1 refcon:(void *)a2;
- (void)updateElements:(id)a0;
- (id)copyElements:(id)a0 psKey:(id)a1;
- (int)createAsyncEventSource:(const void **)a0;
- (int)getEvent:(const struct __CFDictionary **)a0;
- (int)getProperties:(const struct __CFDictionary **)a0;
- (id)latestElement:(id)a0 psKey:(id)a1;
- (void)parseElements:(id)a0;

@end
