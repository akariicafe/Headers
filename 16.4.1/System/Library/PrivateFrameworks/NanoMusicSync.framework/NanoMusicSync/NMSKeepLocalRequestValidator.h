@class NSOperationQueue, MPModelObject;

@interface NMSKeepLocalRequestValidator : NSObject {
    NSOperationQueue *_validationQueue;
}

@property (readonly, nonatomic) MPModelObject *modelObject;

- (void).cxx_destruct;
- (id)initWithModelObject:(id)a0;
- (unsigned long long)_aggregatedFetchOfFileSizeForQuery:(id)a0 withLibrary:(id)a1;
- (id)_arrayOfUniqueTrackPIDsFromQuery:(id)a0;
- (void)_continueValidationWithCurrentResults:(unsigned long long)a0 cellularNetwork:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)_fetchSizeOfModelObjectItems;
- (unsigned long long)_fetchSizeOfPendingDownloadsWithPowerConstraintCheck:(BOOL)a0;
- (id)_predicateForKeepLocalStatusDownloadingOrWaiting;
- (void)performWithQualityOfService:(long long)a0 cellularBundleIdentifier:(id)a1 completion:(id /* block */)a2;

@end
