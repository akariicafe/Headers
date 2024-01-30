@class NSArray;

@interface HIDManager : NSObject {
    struct __IOHIDManager { } *_manager;
    id /* block */ _elementHandler;
    id /* block */ _deviceNotificationHandler;
    id /* block */ _inputReportHandler;
    id /* block */ _cancelHandler;
}

@property (readonly) NSArray *devices;

- (void)cancel;
- (id)initWithOptions:(long long)a0;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCancelHandler:(id /* block */)a0;
- (id)description;
- (void)activate;
- (id)propertyForKey:(id)a0;
- (void)setDispatchQueue:(id)a0;
- (void)open;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDeviceMatching:(id)a0;
- (void)setDeviceNotificationHandler:(id /* block */)a0;
- (void)setInputElementMatching:(id)a0;
- (void)setInputElementHandler:(id /* block */)a0;
- (void)setInputReportHandler:(id /* block */)a0;

@end
