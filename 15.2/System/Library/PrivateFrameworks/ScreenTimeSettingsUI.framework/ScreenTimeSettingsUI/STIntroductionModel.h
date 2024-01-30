@class NSString, STAllowance, STDeviceBedtime;

@interface STIntroductionModel : NSObject

@property BOOL deviceForChild;
@property (retain) STDeviceBedtime *bedtime;
@property (retain) STAllowance *allowance;
@property (retain) NSString *parentalControlsPasscode;
@property (copy) NSString *recoveryAltDSID;

- (void).cxx_destruct;

@end
