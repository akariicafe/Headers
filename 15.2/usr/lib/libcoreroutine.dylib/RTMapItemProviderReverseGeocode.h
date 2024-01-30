@class RTMapItemProviderReverseGeocodeParameters, RTMapServiceManager, NSString;

@interface RTMapItemProviderReverseGeocode : NSObject <RTMapItemProvider>

@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMapItemProviderReverseGeocodeParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMapServiceManager:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (id)initWithDefaultsManager:(id)a0 mapServiceManager:(id)a1;

@end
