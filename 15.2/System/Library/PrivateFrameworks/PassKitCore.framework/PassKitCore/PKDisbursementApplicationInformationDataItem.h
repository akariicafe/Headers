@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKDisbursementApplicationInformation *applicationInformation;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;

@end
