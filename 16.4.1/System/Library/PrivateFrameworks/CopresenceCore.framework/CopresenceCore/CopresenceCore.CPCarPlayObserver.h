@interface CopresenceCore.CPCarPlayObserver : NSObject <CARSessionObserving> {
    void /* unknown type, empty encoding */ sessionStatus;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isAttemptingCarplaySession;
}

- (void)sessionDidDisconnect:(id)a0;
- (void)sessionDidConnect:(id)a0;
- (void)cancelledConnectionAttemptOnTransport:(unsigned long long)a0;
- (void)startedConnectionAttemptOnTransport:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
