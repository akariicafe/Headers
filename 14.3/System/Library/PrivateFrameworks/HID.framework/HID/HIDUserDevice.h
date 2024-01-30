@interface HIDUserDevice : NSObject {
    struct __IOHIDUserDevice { } *_device;
    id /* block */ _getReportHandler;
    id /* block */ _setReportHandler;
    unsigned int _service;
    id /* block */ _cancelHandler;
}

@property (readonly) unsigned int service;

- (void)cancel;
- (id)initWithProperties:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCancelHandler:(id /* block */)a0;
- (id)description;
- (void)activate;
- (id)propertyForKey:(id)a0;
- (void)setDispatchQueue:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setGetReportHandler:(id /* block */)a0;
- (void)setSetReportHandler:(id /* block */)a0;
- (BOOL)handleReport:(id)a0 error:(out id *)a1;
- (BOOL)handleReport:(id)a0 withTimestamp:(unsigned long long)a1 error:(out id *)a2;

@end
