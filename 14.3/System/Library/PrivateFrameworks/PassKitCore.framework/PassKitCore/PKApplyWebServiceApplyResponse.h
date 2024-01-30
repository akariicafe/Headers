@class PKAccount, PKFeatureApplication;

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse

@property (readonly, nonatomic) PKFeatureApplication *featureApplication;
@property (readonly, nonatomic) PKAccount *account;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nextStepInfo;
- (void)encodeWithCoder:(id)a0;

@end
