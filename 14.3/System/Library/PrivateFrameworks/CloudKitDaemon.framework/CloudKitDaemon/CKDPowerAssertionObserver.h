@class NSMapTable;

@interface CKDPowerAssertionObserver : NSObject

@property (retain, nonatomic) NSMapTable *operationsHoldingPowerAssertionsByID;

+ (id)sharedObserver;

- (id)init;
- (id)CKStatusReportArray;
- (void).cxx_destruct;
- (void)operationDidReleasePowerAssertion:(id)a0;
- (id)_init;
- (void)operationDidAcquirePowerAssertion:(id)a0;

@end
