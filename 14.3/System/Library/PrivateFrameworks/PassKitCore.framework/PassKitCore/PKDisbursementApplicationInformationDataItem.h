@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKDisbursementApplicationInformation *applicationInformation;

+ (long long)dataType;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
