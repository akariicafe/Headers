@interface ETImagePreprocessParams : NSObject

@property (readonly, nonatomic) BOOL network_wants_bgr;
@property (readonly, nonatomic) float bias_r;
@property (readonly, nonatomic) float bias_g;
@property (readonly, nonatomic) float bias_b;
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) unsigned long long channels;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long width;

- (id)initWithHeight:(unsigned long long)a0 Width:(unsigned long long)a1 NumChannels:(unsigned long long)a2 Scale:(float)a3 BiasR:(float)a4 BiasG:(float)a5 BiasB:(float)a6 NetworkWantBGR:(BOOL)a7;

@end
