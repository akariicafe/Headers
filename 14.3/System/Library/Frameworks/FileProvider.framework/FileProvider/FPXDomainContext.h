@class FPXExtensionContext, NSFileProviderDomain, NSFileProviderExtension, FPXSpotlightIndexer, NSObject;
@protocol OS_os_log;

@interface FPXDomainContext : NSObject

@property (readonly, weak, nonatomic) FPXExtensionContext *extensionContext;
@property (readonly, nonatomic) NSFileProviderExtension *vendorInstance;
@property (readonly, nonatomic) NSFileProviderDomain *domain;
@property (readonly, nonatomic) BOOL usesFPFS;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) FPXSpotlightIndexer *spotlightIndexer;
@property (readonly, nonatomic) unsigned long long extensionCapabilities;

- (id)itemIDsFromVendorItemIDs:(id)a0;
- (void).cxx_destruct;
- (void)updateCapabilities;
- (id)itemsFromVendorItems:(id)a0;
- (id)initWithVendorInstance:(id)a0 domain:(id)a1 extensionContext:(id)a2 usesFPFS:(BOOL)a3;
- (void)prepareForDomainRemovalWithCompletionHandler:(id /* block */)a0;
- (id)itemIDFromVendorItemID:(id)a0;
- (id)internalErrorFromVendorError:(id)a0;
- (id)itemFromVendorItem:(id)a0;
- (void)invalidate;

@end
