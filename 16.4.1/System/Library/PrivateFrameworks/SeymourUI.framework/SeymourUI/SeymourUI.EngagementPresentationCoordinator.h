@interface SeymourUI.EngagementPresentationCoordinator : NSObject <IAMApplicationContextProvider> {
    void /* unknown type, empty encoding */ engagementClient;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ messageCoordinator;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ engagementBannerRuleInfo;
    void /* unknown type, empty encoding */ modalContextProvider;
    void /* unknown type, empty encoding */ isActive;
}

@property (nonatomic, readonly) BOOL allowsModalMessageDisplay;

- (id)contextPropertyWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)viewControllerForModalPresentation;

@end
