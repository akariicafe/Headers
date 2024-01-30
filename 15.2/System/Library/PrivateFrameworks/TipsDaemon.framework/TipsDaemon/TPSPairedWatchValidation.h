@class NSUUID;

@interface TPSPairedWatchValidation : TPSTargetingValidation

@property (copy, nonatomic) NSUUID *capability;

- (void).cxx_destruct;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithCapability:(id)a0;

@end
