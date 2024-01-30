@interface _TtC11ActivityKitP33_37102ADAD4FB4DA90D1EB342A548B6909Singleton : NSObject <ACActivityPresentationObservationXPCClient> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ _presentationPublisher;
    void /* unknown type, empty encoding */ _queue_presentations;
    void /* unknown type, empty encoding */ _queue_predicates;
}

@property (class, nonatomic, readonly) _TtC11ActivityKitP33_37102ADAD4FB4DA90D1EB342A548B6909Singleton *shared;

- (id)init;
- (void).cxx_destruct;
- (void)activityPresentationsDidChange:(id)a0 completion:(id /* block */)a1;
- (id)listenForActivityPresentationWithActivityIdentifier:(id)a0 presenterBundleIdentifier:(id)a1 handler:(id /* block */)a2;

@end
