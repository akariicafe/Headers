@class HKWorkout, NSDateComponentsFormatter, HKWorkoutDurationNumberFormatter;

@interface HKDataMetadataWorkoutEventSection : HKDataMetadataSection

@property (retain, nonatomic) HKWorkout *workout;
@property (retain, nonatomic) NSDateComponentsFormatter *dateFormatter;
@property (retain, nonatomic) HKWorkoutDurationNumberFormatter *durationFormatter;

- (void).cxx_destruct;
- (id)sectionTitle;
- (id)initWithSample:(id)a0;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end
