@class NSString, STDeviceBedtime, STAllowance, NSDictionary;

@interface STIntroductionViewModel : NSObject

@property BOOL deviceForChild;
@property (retain) STDeviceBedtime *bedtime;
@property (retain) STAllowance *allowance;
@property BOOL communicationSafetyEnabled;
@property (retain) NSString *parentalControlsPasscode;
@property (copy) NSString *recoveryAltDSID;
@property (copy) NSDictionary *restrictions;

- (void).cxx_destruct;

@end
