@interface ContactsUI.CNAvatarPosterPairCollectionPreWarmer : NSObject {
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ carouselViewModel;
    void /* unknown type, empty encoding */ carouselViewModelSubscriber;
    void /* unknown type, empty encoding */ windowScene;
    void /* unknown type, empty encoding */ preWarmingRange;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 contactForSharedProfile:(id)a1;
- (void)preWarmFirstPosterSnapshotIn:(id)a0;

@end
