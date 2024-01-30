@class NSString;

@interface HFIncrementalStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending>

@property (readonly, copy, nonatomic) NSString *characteristicType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCharacteristicType:(id)a0;
- (id)suggestedActionForCharacteristic:(id)a0 candidateActions:(id)a1;

@end
