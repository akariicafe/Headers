@interface NewsUI2.TagFeedViewerDataManager : NSObject <FCPrivateChannelMembershipObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ issueModelFactory;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ membershipController;
    void /* unknown type, empty encoding */ sportsGraphManager;
    void /* unknown type, empty encoding */ topLevelSportsTags;
    void /* unknown type, empty encoding */ _request;
}

- (void)privateChannelMembershipController:(id)a0 didAddMemberships:(id)a1 changedMemberships:(id)a2 removedMemberships:(id)a3;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
