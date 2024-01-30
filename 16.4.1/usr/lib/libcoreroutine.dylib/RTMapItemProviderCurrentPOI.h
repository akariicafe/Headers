@class RTMapItemProviderCurrentPOIParameters, RTVisitStore, NSString;

@interface RTMapItemProviderCurrentPOI : RTMapItemProviderBase <RTMapItemProvider>

@property (retain, nonatomic) RTVisitStore *visitStore;
@property (readonly, copy, nonatomic) RTMapItemProviderCurrentPOIParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 visitStore:(id)a2 parameters:(id)a3;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 visitStore:(id)a2;
- (void).cxx_destruct;

@end
