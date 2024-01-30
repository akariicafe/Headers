@interface HFMeasurementFormatter : NSMeasurementFormatter

@property (copy, nonatomic) id /* block */ measurementBlock;

- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (id)initWithMeasurementBlock:(id /* block */)a0;

@end
