@interface PHASENumberMetaParameter : PHASEMetaParameter

@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;

+ (id)new;

- (id)init;
- (id)initWithUID:(id)a0 delegate:(id)a1;
- (id)initWithUID:(id)a0 value:(double)a1 rangeMin:(double)a2 rangeMax:(double)a3 delegate:(id)a4;
- (void)fadeToValue:(double)a0 duration:(double)a1;

@end
