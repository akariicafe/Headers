@class NSString, SKUIMenuBarViewElementConfiguration, NSArray;

@interface SKUIMenuBarViewElement : SKUIViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement> {
    NSArray *_titleViewElements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration;

+ (id)supportedFeatures;
+ (Class)_titlesMenuBarViewElementClass;
+ (Class)_shelfMenuBarViewElementClass;

- (id)titleForMenuItemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)a0;
- (void)_reloadMenuItems;

@end
