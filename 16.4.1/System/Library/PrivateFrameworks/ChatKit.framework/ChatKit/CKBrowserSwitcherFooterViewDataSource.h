@class NSString;

@interface CKBrowserSwitcherFooterViewDataSource : NSObject <CKBrowserSwitcherFooterViewDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)numberOfPluginsInSwitcherView:(id)a0 forSection:(unsigned long long)a1;
- (id)pluginManager;
- (id)switcherView:(id)a0 indexPathOfModelWithIdentifier:(id)a1;
- (id)switcherView:(id)a0 modelAtIndexPath:(id)a1 type:(long long *)a2;

@end
