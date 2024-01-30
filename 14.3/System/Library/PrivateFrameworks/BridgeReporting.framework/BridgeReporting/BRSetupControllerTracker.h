@class BRSetupControllerDetails, NSMutableArray;

@interface BRSetupControllerTracker : NSObject

@property (retain, nonatomic) NSMutableArray *setupControllers;
@property (retain, nonatomic) BRSetupControllerDetails *holdControllerDetails;

- (void).cxx_destruct;
- (void)clearControllerHold;
- (void)addSetupController:(id)a0 action:(unsigned long long)a1;
- (id)lastPushedSetupController;

@end
