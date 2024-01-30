@class HMHome;
@protocol HFMediaValueSource, HFMediaProfileContainer, HFCharacteristicValueSource;

@interface HFMediaAccessoryItemUpdateRequest : NSObject

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) id<HFMediaValueSource> mediaValueSource;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfile;

- (id)accessories;
- (void).cxx_destruct;
- (id)init;
- (id)updateWithOptions:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0 valueSource:(id)a1;
- (id)_parentMediaSystem;
- (void)_appendSplitMediaAccountWarningIfNeededForAccessory:(id)a0 toResults:(id)a1;
- (void)_appendRestartStatusMessageForAccessory:(id)a0 toResults:(id)a1;
- (id)_disambiguateMultipleAccessoryResponses:(id)a0 forMediaSystem:(id)a1;
- (void)_appendSplitMediaAccountWarningForAccessory:(id)a0 toResults:(id)a1;

@end
