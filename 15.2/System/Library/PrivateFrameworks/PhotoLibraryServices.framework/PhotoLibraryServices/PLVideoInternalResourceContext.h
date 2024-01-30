@class NSString, NSManagedObjectContext, PLManagedAsset;

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation> {
    NSManagedObjectContext *_moc;
    PLManagedAsset *_asset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPhotoIris;
- (id)backingResourceForVideoResource:(id)a0;
- (id)videoResourcesMatchingVersions:(id)a0;
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (BOOL)shouldUseNonAdjustedVersion;
- (double)sizeThresholdForHighQuality;
- (void).cxx_destruct;
- (BOOL)validateResource:(id)a0;
- (void)repairResource:(id)a0;
- (BOOL)hasAdjustments;
- (id)initWithManagedObjectContext:(id)a0 asset:(id)a1;

@end
