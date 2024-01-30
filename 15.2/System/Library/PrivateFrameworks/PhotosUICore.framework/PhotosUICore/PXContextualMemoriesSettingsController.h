@class PXContextualMemoriesSettings, NSMutableArray;

@interface PXContextualMemoriesSettingsController : NSObject

@property (readonly, nonatomic) PXContextualMemoriesSettings *settings;
@property (nonatomic, getter=isRequestingUpdates) BOOL requestingUpdates;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) NSMutableArray *registrationIdentifiers;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (void)requestUpdatedContextualMemoriesSettingsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerForLocationPrefetchingWithIdentifier:(id)a0;
- (void)unregisterForLocationPrefetchingWithIdentifier:(id)a0;

@end
