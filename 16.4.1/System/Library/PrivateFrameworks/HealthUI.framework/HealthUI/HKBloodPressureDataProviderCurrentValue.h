@class NSString, HKQuantity, NSDate;

@interface HKBloodPressureDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    NSDate *_date;
    HKQuantity *_systolicValue;
    HKQuantity *_diastolicValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)date;
- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)a0 unitController:(id)a1 valueFont:(id)a2 unitFont:(id)a3 dateCache:(id)a4;
- (id)initWithSystolicValue:(id)a0 diastolicValue:(id)a1 date:(id)a2;
- (id)_quantityForType:(id)a0 correlation:(id)a1;
- (id)initWithCorrelation:(id)a0;
- (id)lastUpdatedDescriptionWithDateCache:(id)a0;

@end
