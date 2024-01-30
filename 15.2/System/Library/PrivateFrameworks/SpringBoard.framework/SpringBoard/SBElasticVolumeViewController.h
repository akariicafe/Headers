@class NSString, MRUVolumeHUDRouteDescriptionProvider, UIImageSymbolConfiguration;

@interface SBElasticVolumeViewController : SBElasticValueViewController <MRUVolumeHUDRouteDescriptionProviderDelegate> {
    NSString *_highVolumeString;
    BOOL _mediaProvidedRouteDisplayInfoNeedsUpdate;
    UIImageSymbolConfiguration *_routeImageSymbolConfiguration;
    MRUVolumeHUDRouteDescriptionProvider *_routeDescriptionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (id)log;
- (id)dataSource;
- (void).cxx_destruct;
- (id)createSliderView;
- (id)sliderAccessibilityIdentifier;
- (unsigned long long)layoutAxisForInterfaceOrientation:(long long)a0;
- (double)interactiveValueUpdateDiscontinuityInterval;
- (void)_debugHandleNextRoute;
- (void)_debugHandleResetRoute;
- (BOOL)updateActiveRouteDisplay:(out id *)a0;
- (id)overrideDisplayNameForRoute:(id)a0;
- (void)volumeHUDRouteDescriptionProvider:(id)a0 didChangeOutputDeviceAsset:(id)a1;

@end
