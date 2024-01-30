@class ACHRemoteTemplateAvailabilityKeyProvider, ACHMobileAssetProvider, NSDictionary, ACHBackCompatRemoteAchievementAvailabilityKeyWriter, NSString, NSObject, ACHRemoteTemplateAvailabilityListener;
@protocol OS_dispatch_queue, ACHTemplateSourceDelegate;

@interface ACHRemoteTemplateSource : NSObject <ACHRemoteTemplateAvailabilityListenerDelegate, ACHTemplateSource> {
    NSString *_buildVersionOverride;
}

@property (retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider;
@property (retain, nonatomic) ACHBackCompatRemoteAchievementAvailabilityKeyWriter *backCompatAvailabilityKeyWriter;
@property (retain, nonatomic) ACHRemoteTemplateAvailabilityKeyProvider *remoteTemplateAvailabilityKeyProvider;
@property (retain, nonatomic) ACHRemoteTemplateAvailabilityListener *remoteTemplateAvailabilityListener;
@property (retain, nonatomic) NSDictionary *resourceAssetURLsByUniqueName;
@property (retain, nonatomic) NSDictionary *stickerAssetURLsByUniqueName;
@property (retain, nonatomic) NSDictionary *assetVersionsByUniqueName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildVersion;
- (void).cxx_destruct;
- (BOOL)sourceShouldRunForDate:(id)a0;
- (void)templatesForDate:(id)a0 completion:(id /* block */)a1;
- (id)localizationBundleURLForTemplate:(id)a0;
- (id)resourceBundleURLForTemplate:(id)a0;
- (id)propertyListBundleURLForTemplate:(id)a0;
- (id)stickerBundleURLForTemplate:(id)a0;
- (long long)mobileAssetVersionForTemplate:(id)a0;
- (void)_addAssetVersionsByUniqueNameToDictionary:(id)a0 fromAsset:(id)a1;
- (void)_addURLsByUniqueNameToDictionary:(id)a0 fromAsset:(id)a1;
- (void)_removeURLsByUniqueNameFromDictionary:(id)a0 fromAsset:(id)a1;
- (id)_resourceAssetURLForTemplate:(id)a0;
- (void)remoteTemplateAvailabilityUpdated;
- (id)initWithMobileAssetProvider:(id)a0 backCompatWriter:(id)a1 remoteTemplateAvailabilityKeyProvider:(id)a2 remoteTemplateAvailabilityListener:(id)a3;
- (void)setBuildVersionOverride:(id)a0;

@end
