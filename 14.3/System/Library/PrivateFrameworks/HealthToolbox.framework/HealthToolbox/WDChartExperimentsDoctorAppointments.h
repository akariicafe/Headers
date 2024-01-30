@class HKHorizontalSingleLineSeries;

@interface WDChartExperimentsDoctorAppointments : HKInteractiveChartViewController

@property (readonly, nonatomic) HKHorizontalSingleLineSeries *appointmentSeries;

- (void).cxx_destruct;
- (void)setColor:(id)a0;
- (id)_parseSpecifications:(id)a0;
- (id)initWithAppointments:(id)a0 profile:(id)a1 color:(id)a2;
- (id)initWithSpecifications:(id)a0 profile:(id)a1 color:(id)a2;

@end
