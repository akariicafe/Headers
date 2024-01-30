@class NSString, HKQuantity, NSDate;

@interface HKAudioExposureDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    unsigned long long _classification;
    HKQuantity *_leqQuantity;
    double _secondsListened;
    long long _daysAggregated;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)a0 unitController:(id)a1 valueFont:(id)a2 unitFont:(id)a3 dateCache:(id)a4;
- (id)attributedSupplementaryStringWithDisplayType:(id)a0 unitController:(id)a1 font:(id)a2;
- (id)initWithLEQQuantity:(id)a0 secondsListened:(double)a1 daysAggregated:(long long)a2 date:(id)a3;
- (id)_attributedSymbolForClassification:(unsigned long long)a0 font:(id)a1;
- (id)lastUpdatedDescriptionWithDateCache:(id)a0;
- (id)lastUpdatedShortDescriptionWithDateCache:(id)a0;
- (id)stringWithDisplayType:(id)a0 unitController:(id)a1;

@end
