@class HMAccessory, HMService, NSSet;
@protocol HFCharacteristicValueSource;

@interface HFServiceLikeItemUpdateRequest : NSObject

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HMService *service;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (retain, nonatomic) NSSet *characteristics;

- (id)init;
- (void).cxx_destruct;
- (id)updateWithOptions:(id)a0;
- (id)_displayMetadataForReadResponse:(id)a0;
- (id)_standardResultsForReadResponse:(id)a0 displayMetadata:(id)a1 batteryLevelResults:(id)a2 updateOptions:(id)a3;
- (id)initWithAccessory:(id)a0 valueSource:(id)a1 characteristics:(id)a2;
- (id)initWithService:(id)a0 valueSource:(id)a1 characteristics:(id)a2;

@end
