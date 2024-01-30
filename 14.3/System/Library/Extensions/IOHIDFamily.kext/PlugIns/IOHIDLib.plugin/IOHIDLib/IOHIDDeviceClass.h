@class NSMutableDictionary, IOHIDQueueClass, NSMutableArray;

@interface IOHIDDeviceClass : IOHIDPlugin {
    struct IOHIDDeviceTimeStampedDeviceInterface { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *_device;
    struct __CFMachPort { } *_machPort;
    BOOL _opened;
    BOOL _tccRequested;
    BOOL _tccGranted;
    IOHIDQueueClass *_queue;
    NSMutableArray *_elements;
    NSMutableArray *_sortedElements;
    NSMutableArray *_reportElements;
    NSMutableDictionary *_properties;
    void /* function */ *_inputReportCallback;
    void /* function */ *_inputReportTimestampCallback;
    void *_inputReportContext;
    char *_inputReportBuffer;
    long long _inputReportBufferLength;
}

@property (readonly) unsigned int port;
@property (readonly) struct __CFRunLoopSource { } *runLoopSource;
@property (readonly) unsigned int connect;
@property (readonly) unsigned int service;

- (int)close:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)stop;
- (void)initQueue;
- (int)open:(unsigned int)a0;
- (int)setProperty:(id)a0 property:(id)a1;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;
- (int)probe:(id)a0 service:(unsigned int)a1 outScore:(int *)a2;
- (int)start:(id)a0 service:(unsigned int)a1;
- (int)setValue:(struct __IOHIDElement { } *)a0 value:(struct __IOHIDValue { } *)a1 timeout:(unsigned int)a2 callback:(void /* function */ *)a3 context:(void *)a4 options:(unsigned int)a5;
- (int)getValue:(struct __IOHIDElement { } *)a0 value:(struct __IOHIDValue **)a1 timeout:(unsigned int)a2 callback:(void /* function */ *)a3 context:(void *)a4 options:(unsigned int)a5;
- (int)getAsyncEventSource:(const void **)a0;
- (struct __IOHIDElement { } *)getElement:(unsigned int)a0;
- (void)releaseOOBReport:(unsigned long long)a0;
- (void)valueAvailableCallback:(int)a0;
- (void)initPort;
- (int)initElements;
- (int)initConnect;
- (id)propertyForElementKey:(id)a0;
- (id)copyObsoleteDictionary:(id)a0;
- (int)getProperty:(id)a0 property:(const void **)a1;
- (int)copyMatchingElements:(id)a0 elements:(const struct __CFArray **)a1 options:(unsigned int)a2;
- (int)setInputReportCallback:(char *)a0 reportLength:(long long)a1 callback:(void /* function */ *)a2 context:(void *)a3 options:(unsigned int)a4;
- (int)setReport:(int)a0 reportID:(unsigned int)a1 report:(const char *)a2 reportLength:(long long)a3 timeout:(unsigned int)a4 callback:(void /* function */ *)a5 context:(void *)a6 options:(unsigned int)a7;
- (int)getReport:(int)a0 reportID:(unsigned int)a1 report:(char *)a2 reportLength:(long long *)a3 timeout:(unsigned int)a4 callback:(void /* function */ *)a5 context:(void *)a6 options:(unsigned int)a7;
- (int)setInputReportWithTimeStampCallback:(char *)a0 reportLength:(long long)a1 callback:(void /* function */ *)a2 context:(void *)a3 options:(unsigned int)a4;

@end
