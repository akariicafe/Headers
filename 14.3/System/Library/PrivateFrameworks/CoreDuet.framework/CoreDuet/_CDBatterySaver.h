@class NSXPCConnection;

@interface _CDBatterySaver : NSObject <_CDBatterySaverProtocol> {
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;
+ (id)batterySaver;

- (long long)setMode:(long long)a0;
- (BOOL)setPowerMode:(long long)a0 fromSource:(id)a1;
- (long long)getPowerMode;
- (id)init;
- (void).cxx_destruct;
- (void)setPowerMode:(long long)a0 fromSource:(id)a1 withCompletion:(id /* block */)a2;
- (void)setPowerMode:(long long)a0 withCompletion:(id /* block */)a1;
- (BOOL)setPowerMode:(long long)a0 error:(id *)a1;
- (void)dealloc;

@end
