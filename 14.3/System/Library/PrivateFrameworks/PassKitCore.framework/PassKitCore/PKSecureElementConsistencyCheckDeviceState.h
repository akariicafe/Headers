@class NSArray, NSDictionary;

@interface PKSecureElementConsistencyCheckDeviceState : NSObject

@property (copy, nonatomic) NSArray *applets;
@property (copy, nonatomic) NSArray *devicePaymentApplications;
@property (copy, nonatomic) NSDictionary *credentialsForAID;

- (void).cxx_destruct;

@end
