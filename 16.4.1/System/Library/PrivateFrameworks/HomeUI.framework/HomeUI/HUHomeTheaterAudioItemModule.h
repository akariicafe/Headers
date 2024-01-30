@class NSString, NSSet, HFItem;
@protocol HUHomeTheaterAudioItemModuleAlertDelegate, HUHomeTheaterAudioItemModuleOnboardingDelegate, HFMediaProfileContainer;

@interface HUHomeTheaterAudioItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (weak, nonatomic) id<HUHomeTheaterAudioItemModuleOnboardingDelegate> onboardingDelegate;
@property (weak, nonatomic) id<HUHomeTheaterAudioItemModuleAlertDelegate> alertDelegate;
@property (retain, nonatomic) NSString *tappedDestinationIdentifier;
@property (readonly, weak, nonatomic) HFItem *selectedUncommittedItem;
@property (readonly, nonatomic) BOOL includeLocalDestinations;
@property (nonatomic) BOOL disableAutomaticCommit;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)commitConfiguration;
- (void)selectItem:(id)a0;
- (id)_updateDestinationToIdentifier:(id)a0;
- (void)_createItemProviders;
- (void)_selectItem:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 mediaProfileContainer:(id)a1 includeLocalDestinations:(BOOL)a2;

@end
