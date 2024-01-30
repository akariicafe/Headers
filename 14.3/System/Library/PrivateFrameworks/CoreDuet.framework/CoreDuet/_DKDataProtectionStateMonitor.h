@class _DKDataProtectionMonitor, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {
    _DKDataProtectionMonitor *_main;
    NSUUID *_handlerUUID;
}

@property (copy) id /* block */ changeHandler;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isDataAvailableFor:(id)a0;

@end
