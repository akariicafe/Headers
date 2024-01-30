@interface SeymourServices.EngagementPushHandler : NSObject <AMSPushHandlerDelegate> {
    void /* unknown type, empty encoding */ bagConsumer;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ delegate;
}

- (void)pushPayload:(id)a0 withBadgeRequest:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
