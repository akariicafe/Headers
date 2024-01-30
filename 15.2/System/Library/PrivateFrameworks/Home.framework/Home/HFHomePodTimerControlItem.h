@class HFHomeKitSettingsValueManager;
@protocol HFMediaProfileContainer;

@interface HFHomePodTimerControlItem : HFControlItem

@property (readonly, nonatomic) HFHomeKitSettingsValueManager *valueManager;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)readValueAndPopulateStandardResults;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0 displayResults:(id)a1;
- (id)resultsForBatchReadResponse:(id)a0;
- (id)normalizedValueForValue:(id)a0;

@end
