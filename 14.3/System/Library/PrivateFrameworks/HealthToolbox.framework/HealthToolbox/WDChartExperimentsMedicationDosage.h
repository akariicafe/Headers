@class UIColor;

@interface WDChartExperimentsMedicationDosage : HKInteractiveChartViewController

@property (retain, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (id)_parseDoseSpecifications:(id)a0;
- (id)initMedicationName:(id)a0 dosages:(id)a1 profile:(id)a2 color:(id)a3;
- (id)initMedicationName:(id)a0 specifications:(id)a1 profile:(id)a2 color:(id)a3;

@end
