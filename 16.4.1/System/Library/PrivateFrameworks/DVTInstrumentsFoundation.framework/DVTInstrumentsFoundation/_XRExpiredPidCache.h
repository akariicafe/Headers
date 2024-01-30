@class NSMutableDictionary;

@interface _XRExpiredPidCache : NSObject {
    struct TFPPidWatcher { unsigned int clientPort; } pidWatcher;
    int enableCount;
    NSMutableDictionary *signatures;
}

- (void).cxx_destruct;

@end
