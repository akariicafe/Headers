@interface MSPowerAssertionManager : NSObject

@property (nonatomic) BOOL isBusy;
@property (nonatomic) BOOL isAssertingPowerAssertion;
@property (nonatomic) unsigned int assertionID;
@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;

+ (id)sharedManager;

- (void)retainBusy;
- (void)retainUIBusy;
- (void)_deassertPowerAssertion;
- (void)_assertPowerAssertion;
- (void)releaseBusy;
- (void)releaseUIBusy;
- (void)_recomputePowerAssertion;
- (void)toggleAssertion;

@end
