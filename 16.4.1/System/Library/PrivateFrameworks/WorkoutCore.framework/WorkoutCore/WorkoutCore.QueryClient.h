@interface WorkoutCore.QueryClient : NSObject <_HKXPCExportable> {
    void /* unknown type, empty encoding */ serverQueue;
    void /* unknown type, empty encoding */ clientQueue;
    void /* unknown type, empty encoding */ pluginProxyProvider;
}

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)init;
- (void).cxx_destruct;

@end
