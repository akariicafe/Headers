@class NSString;
@protocol _PUPickerExtensionContextVendorInterface;

@interface PUPickerExtensionVendorContext : PUPickerExtensionContext <_PUPickerExtensionContextVendorInterface>

@property (weak, nonatomic) id<_PUPickerExtensionContextVendorInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_deselectAssetsWithIdentifiers:(id)a0;
- (void)_moveAssetWithIdentifier:(id)a0 afterIdentifier:(id)a1;
- (void)_popViewControllerWithReply:(id /* block */)a0;
- (void)_searchWithString:(id)a0;
- (void)_startActivityIndicatorsForAssetsWithIdentifiers:(id)a0;
- (void)_stopActivityIndicatorsForAssetsWithIdentifiers:(id)a0;
- (void)_updateConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
