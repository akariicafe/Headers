@class NSString, NSMutableArray;

@interface PDDeviceRegistrationTask : NSObject

@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL shouldForceApplePay;
@property (nonatomic) BOOL shouldForcePeerPayment;

- (id)init;
- (void).cxx_destruct;

@end
