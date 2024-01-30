@interface MSPowerAssertionManager : NSObject

@property (nonatomic) BOOL isBusy;
@property (nonatomic) BOOL isAssertingPowerAssertion;
@property (nonatomic) unsigned int assertionID;
@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;

+ (id)sharedManager;

- (void)retainBusy;
- (void)releaseBusy;
- (void)retainUIBusy;
- (void)releaseUIBusy;
- (void)_assertPowerAssertion;
- (void)_deassertPowerAssertion;
- (void)_recomputePowerAssertion;
- (void)toggleAssertion;

@end
