@class _DKDataProtectionMonitor, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {
    _DKDataProtectionMonitor *_main;
    NSUUID *_handlerUUID;
}

@property (copy) id /* block */ changeHandler;

- (BOOL)isDataAvailableFor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
