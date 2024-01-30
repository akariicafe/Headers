@class BRSetupControllerDetails, NSMutableArray;

@interface BRSetupControllerTracker : NSObject

@property (retain, nonatomic) NSMutableArray *setupControllers;
@property (retain, nonatomic) BRSetupControllerDetails *holdControllerDetails;

- (id)init;
- (void).cxx_destruct;
- (void)addSetupController:(id)a0 action:(unsigned long long)a1;
- (void)clearControllerHold;
- (id)lastPushedSetupController;

@end
