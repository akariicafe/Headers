@class NSXPCListener, NSMutableDictionary, NSXPCListenerEndpoint, NSString;

@interface WFChooseFromListDataStore : NSObject <NSXPCListenerDelegate, WFDialogListItemStore>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSMutableDictionary *contentItems;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)hasAltTextForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)hasImageForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)hasSubtitleForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)loadAltTextWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)loadImageWithIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)loadSubtitleWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)addContentItem:(id)a0 withIdentifier:(id)a1;
- (void)removeContentItemWithIdentifier:(id)a0;

@end
