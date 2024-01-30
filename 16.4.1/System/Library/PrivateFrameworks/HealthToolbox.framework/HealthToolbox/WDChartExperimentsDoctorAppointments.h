@class HKHorizontalSingleLineSeries;

@interface WDChartExperimentsDoctorAppointments : HKInteractiveChartViewController

@property (readonly, nonatomic) HKHorizontalSingleLineSeries *appointmentSeries;

- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (id)_parseSpecifications:(id)a0;
- (id)initWithAppointments:(id)a0 profile:(id)a1 color:(id)a2;
- (id)initWithSpecifications:(id)a0 profile:(id)a1 color:(id)a2;

@end
