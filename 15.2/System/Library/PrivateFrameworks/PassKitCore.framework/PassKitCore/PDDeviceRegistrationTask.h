@class NSURL, NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject

@property (copy, nonatomic) NSURL *brokerURL;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL shouldForceApplePay;
@property (nonatomic) BOOL shouldForcePeerPayment;

- (void).cxx_destruct;
- (id)init;

@end
