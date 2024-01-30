@class NSDecimalNumber, NSString, NSArray, NSDate, PKCreditAccountStatement;

@interface PKCreditInstallmentPlanPayment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *statementIdentifier;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *originalAmountDue;
@property (retain, nonatomic) NSDecimalNumber *amountDue;
@property (retain, nonatomic) NSDecimalNumber *amountPaid;
@property (retain, nonatomic) NSDate *dueDate;
@property (retain, nonatomic) NSDate *statementDate;
@property (copy, nonatomic) NSArray *lineItems;
@property (nonatomic) unsigned long long paymentNumber;
@property (nonatomic) unsigned long long paymentCount;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (retain, nonatomic) PKCreditAccountStatement *statement;
@property (readonly, nonatomic) NSString *localizedDisplay;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToInstallmentPlanPayment:(id)a0;

@end
