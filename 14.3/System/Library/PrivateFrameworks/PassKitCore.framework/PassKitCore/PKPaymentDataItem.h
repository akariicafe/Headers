@class PKPaymentAuthorizationDataModel, NSArray, NSString;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating>

@property (class, readonly, nonatomic) BOOL supportsMultipleItems;

@property (weak, nonatomic) PKPaymentAuthorizationDataModel *model;
@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (readonly, nonatomic, getter=isRejected) BOOL rejected;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSArray *paymentContactFormatErrors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)dataType;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
