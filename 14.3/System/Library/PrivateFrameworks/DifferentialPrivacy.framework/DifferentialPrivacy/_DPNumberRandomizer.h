@class _DPLaplaceNoiseGenerator;

@interface _DPNumberRandomizer : NSObject

@property (readonly, nonatomic) unsigned long long range;
@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) _DPLaplaceNoiseGenerator *generator;

+ (id)numberRandomizerWithRange:(unsigned long long)a0 epsilon:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)randomize:(id)a0;
- (id)initWithRange:(unsigned long long)a0 epsilon:(double)a1;

@end
