@class NSString;

@interface HFMeasurementFormatter : NSMeasurementFormatter <HFUnitFormatter>

@property (copy, nonatomic) id /* block */ measurementBlock;
@property (readonly, nonatomic) NSString *unitDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringForObjectValue:(id)a0;
- (id)stringForObjectValue:(id)a0 withUnit:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMeasurementBlock:(id /* block */)a0;

@end
