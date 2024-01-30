@class HFCharacteristicValueDisplayMetadata, NSDictionary;

@interface HFMediaAccessoryItemUpdateResponse : NSObject

@property (readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata;
@property (readonly, nonatomic) NSDictionary *standardResults;

- (void).cxx_destruct;
- (id)initWithDisplayMetadata:(id)a0 standardResults:(id)a1;

@end
