@class NSArray, HMDAccessoryFirmwareUpdateTimeWindow;

@interface HMDAccessoryFirmwareUpdatePolicyCriteria : NSObject

@property BOOL noUserAtHome;
@property BOOL anyUserAtHome;
@property BOOL checkForScheduledAutomation;
@property (retain) NSArray *characteristicConfigurations;
@property (retain) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow;

- (void).cxx_destruct;
- (id)init;

@end
