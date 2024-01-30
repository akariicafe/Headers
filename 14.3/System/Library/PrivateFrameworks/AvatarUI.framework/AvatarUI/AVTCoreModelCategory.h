@class NSArray, NSDictionary, AVTCoreModelPairing;

@interface AVTCoreModelCategory : NSObject

@property (readonly, copy, nonatomic) NSArray *presets;
@property (readonly, copy, nonatomic) NSDictionary *tags;
@property (readonly, copy, nonatomic) NSArray *rows;
@property (readonly, nonatomic) long long presetCategory;
@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPresetCategory:(long long)a0 presets:(id)a1 tags:(id)a2 rows:(id)a3 pairing:(id)a4;

@end
