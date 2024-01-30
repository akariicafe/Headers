@class NSString, NSNumber, NSDate;

@interface HKAFibBurdenDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    NSNumber *_maxValue;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)a0 unitController:(id)a1 valueFont:(id)a2 unitFont:(id)a3 dateCache:(id)a4;
- (id)initWithMaxValue:(id)a0 date:(id)a1;

@end
