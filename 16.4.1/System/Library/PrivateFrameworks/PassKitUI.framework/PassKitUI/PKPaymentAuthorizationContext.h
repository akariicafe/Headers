@class PKPaymentRequest, PKPaymentSheetExperiment, NSString;

@interface PKPaymentAuthorizationContext : NSObject

@property (readonly, nonatomic) PKPaymentRequest *request;
@property (readonly, nonatomic) PKPaymentSheetExperiment *paymentSheetExperiment;
@property (readonly, nonatomic) NSString *hostIdentifier;
@property (readonly, nonatomic) NSString *hostBundleIdentifier;
@property (readonly, nonatomic) NSString *hostLocalizedAppName;
@property (readonly, nonatomic) NSString *hostTeamID;
@property (readonly, nonatomic) NSString *hostApplicationIdentifier;

- (id)sanitizeString:(id)a0;
- (id)initWithUserInfo:(id)a0;
- (void).cxx_destruct;

@end
