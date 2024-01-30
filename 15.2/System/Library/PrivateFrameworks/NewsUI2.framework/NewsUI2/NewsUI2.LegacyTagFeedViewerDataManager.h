@interface NewsUI2.LegacyTagFeedViewerDataManager : NSObject <FCPrivateChannelMembershipObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ issueModelFactory;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ membershipController;
    void /* unknown type, empty encoding */ channel;
}

- (void)privateChannelMembershipController:(id)a0 didAddMemberships:(id)a1 changedMemberships:(id)a2 removedMemberships:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
