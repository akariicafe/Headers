@interface HomeUI.AccessoryItemModule : HFItemModule {
    void /* unknown type, empty encoding */ home;
    void /* unknown type, empty encoding */ itemProviderBlock;
    void /* unknown type, empty encoding */ sectionGroupingType;
}

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;

@end
