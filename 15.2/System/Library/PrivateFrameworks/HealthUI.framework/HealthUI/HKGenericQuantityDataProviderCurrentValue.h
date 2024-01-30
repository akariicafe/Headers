@class NSString, HKQuantity, NSDate;

@interface HKGenericQuantityDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    HKQuantity *_quantity;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)a0 unitController:(id)a1 valueFont:(id)a2 unitFont:(id)a3 dateCache:(id)a4;
- (id)initWithQuantity:(id)a0;
- (id)lastUpdatedDescriptionWithDateCache:(id)a0;
- (id)stringWithDisplayType:(id)a0 unitController:(id)a1;

@end
