@class NSObject, RTPersonalizationPortraitManager, NSString, RTMapItemProviderPortraitParameters, RTMapServiceManager;
@protocol OS_dispatch_queue;

@interface RTMapItemProviderPortrait : RTMapItemProviderBase <RTMapItemProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (readonly, copy, nonatomic) RTMapItemProviderPortraitParameters *parameters;
@property (retain, nonatomic) RTPersonalizationPortraitManager *personalizationPortraitManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapServiceManager:(id)a2 personalizationPortraitManager:(id)a3;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapServiceManager:(id)a2 parameters:(id)a3 personalizationPortraitManager:(id)a4;
- (id)_mapItemsForLocation:(id)a0 withNames:(id)a1 withinDistance:(double)a2 options:(id)a3 error:(id *)a4;

@end
