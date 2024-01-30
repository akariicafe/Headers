@class NSArray, NSDictionary;

@interface PKSecureElementConsistencyCheckDeviceState : NSObject

@property (retain, nonatomic) NSArray *applets;
@property (retain, nonatomic) NSArray *devicePaymentApplications;
@property (retain, nonatomic) NSArray *passCredentials;
@property (retain, nonatomic) NSArray *deviceCredentials;
@property (retain, nonatomic) NSDictionary *passIsoBlobHashForCredentialIdentifier;

- (void).cxx_destruct;

@end
