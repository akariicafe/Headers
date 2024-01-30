@class NSString;

@interface HSHIDDevice : NSObject <HSIOHIDDeviceInterface> {
    unsigned char _reportCallbackBuffer[16384];
    BOOL _active;
    BOOL _cancelled;
}

@property (nonatomic) struct __IOHIDDevice { } *deviceRef;
@property (copy, nonatomic) id /* block */ deviceRemovedCallback;
@property (copy, nonatomic) id /* block */ inputReportCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(unsigned int)a0;
- (id)valueForProperty:(struct __CFString { } *)a0;
- (void).cxx_destruct;
- (BOOL)setValue:(id)a0 forProperty:(struct __CFString { } *)a1;
- (BOOL)close:(id *)a0;
- (void)dealloc;
- (BOOL)open:(id *)a0;
- (id)initWithDeviceRef:(struct __IOHIDDevice { } *)a0;
- (BOOL)_setReportWithID:(long long)a0 type:(int)a1 data:(id)a2 error:(id *)a3;
- (BOOL)setOutputReportWithID:(long long)a0 data:(id)a1 error:(id *)a2;
- (BOOL)setFeatureReportWithID:(long long)a0 data:(id)a1 error:(id *)a2;
- (id)featureReportWithID:(long long)a0 error:(id *)a1;
- (void)scheduleWithRunLoop:(struct __CFRunLoop { } *)a0 mode:(const struct __CFString { } *)a1;
- (void)unscheduleFromRunLoop:(struct __CFRunLoop { } *)a0 mode:(struct __CFString { } *)a1;

@end
