@class NSSet, HFItemProvider, HFStaticItem, HMHome;

@interface HUFaceRecognitionUserPhotosLibrarySettingsModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFItemProvider *allowPhotosLibraryAccessItemProvider;
@property (retain, nonatomic) HFStaticItem *photoLibraryAccessNever;
@property (retain, nonatomic) HFStaticItem *photoLibraryAccessOnlyMe;
@property (retain, nonatomic) HFStaticItem *photoLibraryAccessEveryoneInThisHome;
@property (nonatomic) BOOL shouldUseProxCardPresentationStyle;

- (id)itemProviders;
- (void).cxx_destruct;
- (id)didSelectItem:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (id)_updatePhotosLibrarySettingsForItem:(id)a0;

@end
