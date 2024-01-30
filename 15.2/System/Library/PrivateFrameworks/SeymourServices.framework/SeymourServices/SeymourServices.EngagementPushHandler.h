@interface SeymourServices.EngagementPushHandler : NSObject <AMSPushHandlerDelegate> {
    void /* unknown type, empty encoding */ bagConsumer;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ delegate;
}

- (BOOL)pushPaylod:(id)a0 shouldUpdateBadgeForBundleIdentifier:(id)a1 badgeIdentifier:(id)a2 enabled:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
