@interface CNKScreenSharingStateMonitor : NSObject {
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ conversationControllerProvider;
    void /* unknown type, empty encoding */ currentlySharingParticipant;
}

@property (class, nonatomic, readonly) CNKScreenSharingStateMonitor *sharedMonitor;

@property (nonatomic) void /* unknown type, empty encoding */ isBroadcastingScreenSharing;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } currentlySharingParticipantContentsSize;
@property (nonatomic, retain) void /* unknown type, empty encoding */ call;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithActiveCall:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
