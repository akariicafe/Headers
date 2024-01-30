@class RTMapItemProviderMapsSupportParameters, RTMapsSupportManager, NSString;

@interface RTMapItemProviderMapsSupport : RTMapItemProviderBase <RTMapItemProvider>

@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (readonly, copy, nonatomic) RTMapItemProviderMapsSupportParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapsSupportManager:(id)a2 parameters:(id)a3;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapsSupportManager:(id)a2;
- (id)init;
- (double)confidenceFromMapItemSource:(unsigned long long)a0;
- (void).cxx_destruct;

@end
