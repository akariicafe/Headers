@interface PHASEGroupPresetSetting : NSObject

@property (readonly, nonatomic) double gainHighFrequency;
@property (readonly, nonatomic) double gainLowFrequency;
@property (readonly, nonatomic) double gain;
@property (readonly, nonatomic) double rate;
@property (readonly, nonatomic) long long gainCurveType;
@property (readonly, nonatomic) long long rateCurveType;

+ (id)new;

- (id)init;
- (id)initWithGain:(double)a0 rate:(double)a1 gainCurveType:(long long)a2 rateCurveType:(long long)a3;
- (id)initWithGain:(double)a0 rate:(double)a1 gainHighFrequency:(double)a2 gainLowFrequency:(double)a3 gainCurveType:(long long)a4 rateCurveType:(long long)a5;

@end
