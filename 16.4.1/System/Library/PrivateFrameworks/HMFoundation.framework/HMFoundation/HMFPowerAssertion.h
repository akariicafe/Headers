@interface HMFPowerAssertion : HMFAssertion

@property (nonatomic) unsigned int identifier;

- (id)initWithName:(id)a0;
- (void)_cleanUpPowerAssertion;
- (id)initWithName:(id)a0 timeout:(double)a1;
- (void)invalidate;

@end
