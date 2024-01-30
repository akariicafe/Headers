@interface CPBiomeSessionDonator : NSObject <CPConversationManagerDataSourceObserver> {
    void /* unknown type, empty encoding */ queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDataSource:(id)a0 parentQueue:(id)a1;
- (void)conversationManager:(id)a0 conversationChanged:(id)a1;
- (void)conversationManager:(id)a0 activityAuthorizationChangedForBundleIdentifier:(id)a1;

@end
