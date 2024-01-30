@class NSString, MRUOutputDeviceAsset, CCUICAPackageDescription;
@protocol MRUVolumeHUDRouteDescriptionProviderDelegate;

@interface MRUVolumeHUDRouteDescriptionProvider : NSObject <MRUSystemOutputDeviceRouteControllerObserver>

@property (retain, nonatomic) MRUOutputDeviceAsset *outputDeviceAsset;
@property (retain, nonatomic) MRUOutputDeviceAsset *overrideOutputDeviceAsset;
@property (weak, nonatomic) id<MRUVolumeHUDRouteDescriptionProviderDelegate> delegate;
@property (readonly, nonatomic) CCUICAPackageDescription *packageDescription;
@property (readonly, nonatomic) NSString *localizedDisplayTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)packageStateForVolumeValue:(float)a0;
- (void)cycleOverridePackageDescriptions;
- (void)resetOverridePackageDescription;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (void)updateOutputDeviceAsset;

@end
