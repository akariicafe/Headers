@class NSArray, NSString, NSDictionary, NSURL;

@interface PKPaymentActivationResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSArray *verificationChannels;
@property (nonatomic) long long verificationStatus;
@property (readonly, copy, nonatomic) NSString *stepIdentifier;
@property (readonly, copy, nonatomic) NSString *previousStepIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *requiredVerificationFieldData;
@property (readonly, copy, nonatomic) NSURL *passURL;

+ (id)responseWithData:(id)a0 forPass:(id)a1;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 forPass:(id)a1;

@end
