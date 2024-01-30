@interface HSHIDManager : NSObject <HSIOHIDManagerInterface> {
    struct __IOHIDManager { } *_managerRef;
    BOOL _active;
    BOOL _cancelled;
}

@property (copy, nonatomic) id /* block */ deviceEnumeratedCallback;
@property (copy, nonatomic) id /* block */ deviceRemovedCallback;

- (id)devices;
- (id)valueForProperty:(struct __CFString { } *)a0;
- (BOOL)setValue:(id)a0 forProperty:(struct __CFString { } *)a1;
- (BOOL)open:(id *)a0;
- (void)dealloc;
- (BOOL)close:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateDevicesMatching:(id)a0;
- (id)initWithManagerRef:(struct __IOHIDManager { } *)a0;
- (void)scheduleWithRunLoop:(struct __CFRunLoop { } *)a0 mode:(const struct __CFString { } *)a1;
- (void)unscheduleFromRunLoop:(struct __CFRunLoop { } *)a0 mode:(const struct __CFString { } *)a1;

@end
