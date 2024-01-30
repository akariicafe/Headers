@class NSString, NSNumber, HFControlItem;
@protocol HFPrimaryStateWriter;

@interface HFIncrementalStateControlItem : HFControlItem <HFToggleableControlItem>

@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem;
@property (readonly, copy, nonatomic) NSString *incrementalCharacteristicType;
@property (readonly, nonatomic) NSNumber *stepValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valueClass;
+ (id)na_identity;
+ (id)optionsForPrimaryStateControlItem:(id)a0 incrementalCharacteristicType:(id)a1;
+ (id)readOnlyCharacteristicTypes;

- (void).cxx_destruct;
- (id)toggleValue;
- (id)characteristicValuesForValue:(id)a0;
- (id)updateWithOptions:(id)a0;
- (id)writeValue:(id)a0;
- (BOOL)canCopyWithCharacteristicOptions:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 incrementalAndPrimaryCharacteristicType:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 primaryStateControlItem:(id)a1 incrementalCharacteristicType:(id)a2 displayResults:(id)a3;
- (id)togglePrimaryAndIncrementalState;
- (id)valueForCharacteristicType:(id)a0 inBatchReadResponse:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;

@end
