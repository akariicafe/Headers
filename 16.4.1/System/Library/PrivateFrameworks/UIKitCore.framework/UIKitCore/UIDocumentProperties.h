@class _UIDocumentPropertiesHeaderView, LPLinkMetadata, UIAction, _UIDocumentPropertiesIconView, LPMetadataProvider, NSURL, UINavigationItem;

@interface UIDocumentProperties : NSObject

@property (weak, nonatomic) _UIDocumentPropertiesHeaderView *headerView;
@property (weak, nonatomic) _UIDocumentPropertiesIconView *iconView;
@property (retain, nonatomic, setter=_setMetadataProvider:) LPMetadataProvider *_metadataProvider;
@property (readonly, nonatomic) NSURL *url;
@property (copy, nonatomic, setter=_setWantsIconRepresentationChangedHandler:) id /* block */ _wantsIconRepresentationChangedHandler;
@property (weak, nonatomic, setter=_setAssociatedNavigationItem:) UINavigationItem *_associatedNavigationItem;
@property (retain, nonatomic) UIAction *iconRepresentationAction;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (copy, nonatomic) id /* block */ dragItemsProvider;
@property (copy, nonatomic) id /* block */ activityViewControllerProvider;
@property (nonatomic) BOOL wantsIconRepresentation;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)_didLoadMetadata:(id)a0;
- (id)_existingMetadata;
- (void)_fetchMetadataIfNecessary;
- (id)_headerViewForMenuInteraction:(id)a0 sourceViewProvider:(id /* block */)a1;
- (id)_iconView;
- (void)_performBlockAndCallIconRepresentationChangedHandlerIfNecessary:(id /* block */)a0;
- (id)_placeholderMetadata;
- (void)_updateMetadataInUse;
- (id)initWithMetadata:(id)a0;

@end
