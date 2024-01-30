@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKDisbursementApplicationInformation *applicationInformation;

+ (long long)dataType;

- (id)initWithModel:(id)a0;
- (BOOL)isValidWithError:(id *)a0;
- (long long)context;
- (void).cxx_destruct;

@end
