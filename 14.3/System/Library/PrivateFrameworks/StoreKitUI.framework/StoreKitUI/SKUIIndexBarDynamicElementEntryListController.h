@class SKUIDynamicPageSectionIndexMapper, SKUIIndexBarEntryListViewElement, SKUIViewElement, SKUIIndexBarEntryViewElement;
@protocol SKUIEntityProviding;

@interface SKUIIndexBarDynamicElementEntryListController : SKUIIndexBarEntryListController {
    SKUIDynamicPageSectionIndexMapper *_dynamicIndexMapper;
    id<SKUIEntityProviding> _entityProvider;
    SKUIIndexBarEntryViewElement *_indexBarEntryViewElement;
    SKUIViewElement *_templateElement;
}

@property (readonly, nonatomic) SKUIIndexBarEntryListViewElement *entryListViewElement;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_entityProviderDidInvalidateNotification:(id)a0;
- (id)entryDescriptorAtIndex:(long long)a0;
- (long long)numberOfEntryDescriptors;
- (BOOL)hidesIndexBar;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)a0 returningRelativeSectionIndex:(out long long *)a1;
- (BOOL)needsRootTargetViewElement;
- (id)rootTargetIndexBarEntryID;
- (void)setRootTargetViewElement:(id)a0;
- (void)reloadViewElementData;
- (id)initWithEntryListViewElement:(id)a0;

@end
