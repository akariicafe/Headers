@class NSDictionary;

@interface MediaFoundation.PlayerController : _TtCs12_SwiftObject <MFStateDumpable, MFResettable, MFAudioSessionControlling> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ setQueueBehavior;
    void /* unknown type, empty encoding */ currentItemTransition;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ audioSession;
    void /* unknown type, empty encoding */ audioSessionConfiguration;
    void /* unknown type, empty encoding */ videoPlayerViewController;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ fsm;
    void /* unknown type, empty encoding */ playerObserver;
    void /* unknown type, empty encoding */ playerSubscription;
    void /* unknown type, empty encoding */ systemObserver;
    void /* unknown type, empty encoding */ systemSubscription;
    void /* unknown type, empty encoding */ videoPlayerBehavior;
    void /* unknown type, empty encoding */ userEventsMonitor;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ leaseController;
    void /* unknown type, empty encoding */ lastUserEvent;
    void /* unknown type, empty encoding */ previousItemID;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)reset;
- (BOOL)setAudioSessionActive:(BOOL)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (void)updateAudioSessionWithConfiguration:(id)a0;

@end
