@interface _TtC11ActivityKitP33_1602B0B984EDF6E52CE840E80AB3FBCA9Singleton : NSObject <ACActivityOutputXPCClient> {
    void /* unknown type, empty encoding */ _queue_target;
    void /* unknown type, empty encoding */ activityDiffPublisher;
    void /* unknown type, empty encoding */ _activityPublisher;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ _queue_activities;
    void /* unknown type, empty encoding */ _queue_subscriptions;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ calloutQueue;
}

@property (class, nonatomic, readonly) _TtC11ActivityKitP33_1602B0B984EDF6E52CE840E80AB3FBCA9Singleton *shared;

- (id)init;
- (void).cxx_destruct;
- (void)activitiesChanged:(id)a0 completion:(id /* block */)a1;

@end
