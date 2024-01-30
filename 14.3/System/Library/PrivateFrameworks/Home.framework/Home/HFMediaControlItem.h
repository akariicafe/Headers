@class NSString, HFMediaActionSetting;
@protocol HFMediaProfileContainer, HFMediaValueSource;

@interface HFMediaControlItem : HFControlItem <HFTogglableControlItem>

@property (copy, nonatomic) NSString *mediaRoutingIdentifier;
@property (copy, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) id<HFMediaValueSource> mediaValueSource;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) long long mediaAccessoryItemType;
@property (retain, nonatomic) HFMediaActionSetting *mediaActionSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)initWithValueSource:(id)a0 mediaProfileContainer:(id)a1 mediaAccessoryItemType:(long long)a2 displayResults:(id)a3;
- (id)initWithMediaRoutingIdentifier:(id)a0 deviceName:(id)a1 mediaAccessoryItemType:(long long)a2;
- (long long)toggledSceneStateFromPrimaryState:(long long)a0;
- (long long)mapToHMMediaPlaybackState:(long long)a0;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)writeValue:(id)a0;
- (id)readValueAndPopulateStandardResults;
- (id)writePrimaryState:(long long)a0;
- (id)toggleValue;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (long long)sortPriority;
- (id)normalizedValueForValue:(id)a0;

@end
