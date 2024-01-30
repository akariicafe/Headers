@class NSString, NTKCUpNextDataSourcesManager;

@interface NTKCUpNextDataSourcesViewController : PSListController <NTKCUpNextDataSourcesManagerIdentifiersDelegate> {
    NTKCUpNextDataSourcesManager *_dataSourcesManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_disabledDataSourcesDidChange;
- (void)manager:(id)a0 didUpdateDataSourceEntries:(id)a1;
- (void)_setDataSourceEnabled:(id)a0 withSpecifier:(id)a1;
- (id)_dataSourceEnabled:(id)a0;
- (void)_setAndResizeIconImage:(id)a0 forSpecifier:(id)a1;

@end
