@class NSString, _DPLaplaceNoiseGenerator;

@interface _DPNumberRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) unsigned long long range;
@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) _DPLaplaceNoiseGenerator *generator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)numberRandomizerWithRange:(unsigned long long)a0 epsilon:(double)a1;

- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)init;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithRange:(unsigned long long)a0 epsilon:(double)a1;
- (id)randomize:(id)a0;
- (id)randomizeNumbers:(id)a0 forKey:(id)a1;

@end
