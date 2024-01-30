@class NSMutableDictionary, _CDClientContext;

@interface PPAppLaunchMonitorGuardedData : NSObject {
    NSMutableDictionary *handlers;
    unsigned long long nextToken;
    BOOL isRegistered;
    _CDClientContext *clientContext;
}

- (void).cxx_destruct;

@end
