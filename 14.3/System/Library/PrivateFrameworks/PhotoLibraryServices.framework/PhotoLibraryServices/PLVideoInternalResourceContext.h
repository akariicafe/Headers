@class NSString, NSManagedObjectContext, PLManagedAsset;

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation> {
    NSManagedObjectContext *_moc;
    PLManagedAsset *_asset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasAdjustments;
- (void).cxx_destruct;
- (id)backingResourceForVideoResource:(id)a0;
- (id)initWithManagedObjectContext:(id)a0 asset:(id)a1;
- (BOOL)isPhotoIris;
- (BOOL)shouldUseNonAdjustedVersion;
- (double)sizeThresholdForHighQuality;
- (BOOL)validateResource:(id)a0;
- (id)videoResourcesMatchingVersions:(id)a0;
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (void)repairResource:(id)a0;

@end
