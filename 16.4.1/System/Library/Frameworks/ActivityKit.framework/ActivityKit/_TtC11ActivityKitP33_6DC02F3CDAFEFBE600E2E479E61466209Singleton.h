@interface _TtC11ActivityKitP33_6DC02F3CDAFEFBE600E2E479E61466209Singleton : NSObject <ACActivityQoSObservationXPCClient> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ _qosPublisher;
    void /* unknown type, empty encoding */ _queue_qos;
    void /* unknown type, empty encoding */ _queue_predicates;
}

@property (class, nonatomic, readonly) _TtC11ActivityKitP33_6DC02F3CDAFEFBE600E2E479E61466209Singleton *shared;

- (id)init;
- (void).cxx_destruct;
- (void)activityQoSDidChange:(id)a0 completion:(id /* block */)a1;
- (id)listenForActivityQoSWithActivityIdentifier:(id)a0 handler:(id /* block */)a1;

@end
