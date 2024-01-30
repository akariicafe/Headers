@class NSDateComponentsFormatter, HKWorkoutDurationNumberFormatter, HKDisplayTypeController, HKUnitPreferenceController, HKWorkout;

@interface HKDataMetadataWorkoutActivitySection : HKDataMetadataSection

@property (retain, nonatomic) HKWorkout *workout;
@property (retain, nonatomic) NSDateComponentsFormatter *dateFormatter;
@property (retain, nonatomic) HKWorkoutDurationNumberFormatter *durationFormatter;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController;

- (void).cxx_destruct;
- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)initWithSample:(id)a0 displayTypeController:(id)a1 unitController:(id)a2;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end
