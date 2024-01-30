@interface ETOptimizerDefSGD : ETOptimizerDef

@property float lr;
@property float lr_decay_epoch;
@property float momentum;
@property float weight_decay;

- (id)init;

@end
