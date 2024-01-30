@interface HomeUI.ActionGridItemModule : HomeUI.AccessoryItemModule <HFActionSetValueSourceDelegate> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ actionBuilderContainer;
    void /* unknown type, empty encoding */ delegate;
}

- (void).cxx_destruct;
- (void)actionSetValueSource:(id)a0 didUpdateValuesForActionBuilders:(id)a1;
- (id)buildItemProviders;

@end
