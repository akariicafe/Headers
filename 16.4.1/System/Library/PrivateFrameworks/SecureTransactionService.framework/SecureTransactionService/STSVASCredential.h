@class NSData;

@interface STSVASCredential : STSAuxiliaryCredential

@property (retain, nonatomic) NSData *merchantId;
@property (nonatomic) BOOL userInterventionRequired;
@property (retain, nonatomic) NSData *mobileToken;
@property (retain, nonatomic) NSData *data;

+ (BOOL)supportsSecureCoding;
+ (id)vasCredentialWithMerchantId:(id)a0 data:(id)a1 mobileToken:(id)a2 userInterventionRequired:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMerchantId:(id)a0 data:(id)a1 mobileToken:(id)a2 userInterventionRequired:(BOOL)a3;

@end
