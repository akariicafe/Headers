@class NSArray;

@interface PKSecureElementConsistencyCheckDeviceState : NSObject

@property (copy, nonatomic) NSArray *applets;
@property (copy, nonatomic) NSArray *devicePaymentApplications;
@property (copy, nonatomic) NSArray *deviceCredentials;

- (void).cxx_destruct;

@end
