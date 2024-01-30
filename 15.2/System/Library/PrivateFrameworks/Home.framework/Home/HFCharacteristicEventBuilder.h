@class NSString, HMCharacteristic;

@interface HFCharacteristicEventBuilder : HFEventBuilder <NAEquatable>

@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)characteristicEventBuildersForEvents:(id)a0 inHome:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)eventType;
- (id)_initWithEvent:(id)a0;
- (id)_initWithCharacteristic:(id)a0;
- (void)copyValuesFromCharacteristicEventBuilder:(id)a0;
- (id)triggeringValues;
- (BOOL)wouldFireForCharacteristic:(id)a0 value:(id)a1;

@end
