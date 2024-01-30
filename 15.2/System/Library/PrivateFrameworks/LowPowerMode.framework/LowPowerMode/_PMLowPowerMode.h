@class NSXPCConnection;

@interface _PMLowPowerMode : NSObject <_PMLowPowerModeProtocol> {
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (long long)getPowerMode;
- (void)setPowerMode:(long long)a0 fromSource:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)setPowerMode:(long long)a0 fromSource:(id)a1;

@end
