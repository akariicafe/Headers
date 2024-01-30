@interface TSTagBlockedAlertPresenter : NSObject <FCSubscriptionObserving> {
    void /* unknown type, empty encoding */ alertPresenter;
    void /* unknown type, empty encoding */ appConfigurationManager;
}

@property (nonatomic) void /* unknown type, empty encoding */ enabled;

- (id)init;
- (void).cxx_destruct;
- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5 eventInitiationLevel:(long long)a6;

@end
