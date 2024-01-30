@class NSString;
@protocol PKPayLaterFundingSourceDetails;

@interface PKPayLaterFinancingOptionFundingSource : NSObject <PKPayLaterFundingSource>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL autoPayment;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<PKPayLaterFundingSourceDetails> details;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)displayName;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)bankDetails;
- (id)initWithAccountFundingSource:(id)a0;
- (id)initWithPaymentPass:(id)a0 paymentApplication:(id)a1;
- (id)panSuffix;
- (id)paymentPassDetails;
- (id)unmaskedPanSuffix;

@end
