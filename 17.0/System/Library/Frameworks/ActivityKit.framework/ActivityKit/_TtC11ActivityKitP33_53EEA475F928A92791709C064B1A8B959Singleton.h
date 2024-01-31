@interface _TtC11ActivityKitP33_53EEA475F928A92791709C064B1A8B959Singleton : NSObject <ACActivityProminenceObservationXPCClient> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ _prominencePublisher;
    void /* unknown type, empty encoding */ _queue_prominentActivityIdentifiers;
    void /* unknown type, empty encoding */ _queue_predicates;
}

@property (class, nonatomic, readonly) _TtC11ActivityKitP33_53EEA475F928A92791709C064B1A8B959Singleton *shared;

- (id)init;
- (void).cxx_destruct;
- (void)activityProminenceDidChange:(id)a0 completion:(id /* block */)a1;
- (id)listenForActivityProminenceWithActivityIdentifier:(id)a0 handler:(id /* block */)a1;

@end
