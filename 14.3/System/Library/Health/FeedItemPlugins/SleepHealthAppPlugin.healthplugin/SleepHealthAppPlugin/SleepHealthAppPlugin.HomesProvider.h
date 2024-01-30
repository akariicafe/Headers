@interface SleepHealthAppPlugin.HomesProvider : NSObject <HMHomeManagerDelegate> {
    void /* unknown type, empty encoding */ homesPublisher;
    void /* unknown type, empty encoding */ homeManager;
}

- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
