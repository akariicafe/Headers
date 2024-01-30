@class NSString, TSClockManager;

@interface TSClockManagerInterface : NSObject <TSClockManagerClient> {
    void /* function */ *_interruptionCallback;
    void *_interruptionRefcon;
}

@property (retain, nonatomic) TSClockManager *clockManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addToClockManager;
- (void)interruptedConnectionForClockManager:(id)a0;
- (void)removeFromClockManager;
- (void)setInterruptionCallback:(void /* function */ *)a0 andRefcon:(void *)a1;

@end
