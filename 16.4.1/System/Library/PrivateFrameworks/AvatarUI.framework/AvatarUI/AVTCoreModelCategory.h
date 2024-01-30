@class NSArray, NSDictionary, AVTCoreModelPairing;

@interface AVTCoreModelCategory : NSObject

@property (readonly, copy, nonatomic) NSArray *presets;
@property (readonly, copy, nonatomic) NSDictionary *tags;
@property (readonly, copy, nonatomic) NSArray *pickers;
@property (readonly, nonatomic) long long presetCategory;
@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPresetCategory:(long long)a0 presets:(id)a1 tags:(id)a2 rows:(id)a3 pairing:(id)a4;

@end
