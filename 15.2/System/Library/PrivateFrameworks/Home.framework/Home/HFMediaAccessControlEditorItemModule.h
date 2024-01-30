@class NSString, HFMediaAccessControlEditorItemProvider, NSSet, HMHome;

@interface HFMediaAccessControlEditorItemModule : HFItemModule <HFHomeObserver> {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFMediaAccessControlEditorItemProvider *accessControlEditorItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_descriptionFooterTextForAccessControlDescriptor:(id)a0 hasNonPeerToPeerMediaAccessories:(BOOL)a1;

- (void)home:(id)a0 didUpdateMediaPassword:(id)a1;
- (void)home:(id)a0 didUpdateMinimumMediaUserPrivilege:(long long)a1;
- (void)home:(id)a0 didUpdateMediaPeerToPeerEnabled:(BOOL)a1;
- (id)itemProviders;
- (void).cxx_destruct;
- (BOOL)containsItem:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (BOOL)_hasNonPeerToPeerMediaAccessories;
- (id)updateAccessControlDescriptor:(id)a0;

@end
