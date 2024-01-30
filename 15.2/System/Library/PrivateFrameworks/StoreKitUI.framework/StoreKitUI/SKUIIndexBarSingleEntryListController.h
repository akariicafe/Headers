@class SKUIViewElement, SKUIIndexBarEntryViewElement, SKUIIndexBarEntryDescriptor;

@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController {
    SKUIIndexBarEntryDescriptor *_entryDescriptor;
    SKUIViewElement *_descriptiveViewElement;
}

@property (readonly, nonatomic) SKUIIndexBarEntryViewElement *entryViewElement;

- (void).cxx_destruct;
- (id)entryDescriptorAtIndex:(long long)a0;
- (long long)numberOfEntryDescriptors;
- (BOOL)hidesIndexBar;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)a0 returningRelativeSectionIndex:(out long long *)a1;
- (BOOL)needsRootTargetViewElement;
- (void)reloadViewElementData;
- (id)initWithEntryViewElement:(id)a0;

@end
