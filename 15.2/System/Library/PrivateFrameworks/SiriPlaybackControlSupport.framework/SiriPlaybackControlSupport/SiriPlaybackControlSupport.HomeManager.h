@interface SiriPlaybackControlSupport.HomeManager : NSObject <HMHomeManagerDelegate> {
    void /* unknown type, empty encoding */ homeManagerInitTimeout;
    void /* unknown type, empty encoding */ hmHomeManager;
    void /* unknown type, empty encoding */ hmHomeManagerOptions;
    void /* unknown type, empty encoding */ homeData;
    void /* unknown type, empty encoding */ loadSucceeded;
    void /* unknown type, empty encoding */ readyGroup;
    void /* unknown type, empty encoding */ initializationSignpost;
    void /* unknown type, empty encoding */ loadQueue;
}

- (void)homeManagerDidUpdateHomes:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
