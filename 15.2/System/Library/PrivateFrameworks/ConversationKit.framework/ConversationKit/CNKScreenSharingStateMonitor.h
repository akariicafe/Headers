@interface CNKScreenSharingStateMonitor : NSObject {
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ conversationControllerProvider;
    void /* unknown type, empty encoding */ currentlySharingParticipant;
}

@property (class, nonatomic, readonly) CNKScreenSharingStateMonitor *sharedMonitor;

@property (nonatomic) void /* unknown type, empty encoding */ isBroadcastingScreenSharing;
@property (nonatomic, retain) void /* unknown type, empty encoding */ call;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithActiveCall:(id)a0;
- (id)init;

@end
