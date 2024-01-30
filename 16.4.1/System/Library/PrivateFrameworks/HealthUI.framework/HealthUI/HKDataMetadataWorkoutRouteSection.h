@class HKDataMetadataWorkoutRouteCell, HKLocationReadings, HKLocationFetcher, HKRouteMapGenerator;

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection

@property (retain, nonatomic) HKDataMetadataWorkoutRouteCell *cell;
@property (readonly, nonatomic) HKLocationReadings *locationReadings;
@property (retain, nonatomic) HKLocationFetcher *locationFetcher;
@property (retain, nonatomic) HKRouteMapGenerator *generator;

- (void).cxx_destruct;
- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)generateRouteImage;
- (id)initWithLocationReadings:(id)a0;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end
