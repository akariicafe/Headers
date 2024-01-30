@interface TSToolbarItemManager : NSObject {
    void /* unknown type, empty encoding */ sceneProvider;
    void /* unknown type, empty encoding */ toolbarManager;
}

- (void)configure;
- (id)init;
- (void).cxx_destruct;
- (void)updateShareConfigurationFactory:(id /* block */)a0;
- (void)removeShareConfigurationFactory;
- (void)updateTitleWithText:(id)a0;
- (void)updateTitleWithImage:(id)a0 tooltip:(id)a1;
- (void)updateSectionsMenu:(id)a0;
- (void)removeSectionsMenu;
- (void)deconfigure;

@end
