@class FPXExtensionContext, FPXDomainContext, NSFileProviderExtension, NSObject, FPItemID;
@protocol OS_dispatch_queue;

@interface FPXObserver : NSObject {
    FPItemID *_observedItemID;
    FPXDomainContext *_domainContext;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileProviderExtension *_strongVendorInstance;
    FPXExtensionContext *_strongExtensionContext;
}

@property (readonly, getter=isInvalidated) BOOL invalidated;

- (void)_fixupFavoriteRank:(id)a0;
- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1;
- (id)updateForProviderItem:(id)a0;
- (void)verifyVendorToken:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;

@end
