@class NSString, NSSet, HFItem;
@protocol HUHomeTheaterAudioItemModuleDelegate, HFMediaProfileContainer;

@interface HUHomeTheaterAudioItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (weak, nonatomic) id<HUHomeTheaterAudioItemModuleDelegate> delegate;
@property (retain, nonatomic) NSString *tappedDestinationIdentifier;
@property (readonly, weak, nonatomic) HFItem *selectedUncommittedItem;
@property (readonly, nonatomic) BOOL includeLocalDestinations;
@property (nonatomic) BOOL disableAutomaticCommit;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)commitConfiguration;
- (id)itemProviders;
- (void)selectItem:(id)a0;
- (void)_createItemProviders;
- (id)initWithItemUpdater:(id)a0 mediaProfileContainer:(id)a1 includeLocalDestinations:(BOOL)a2;
- (id)_updateDestinationToIdentifier:(id)a0;

@end
