@class NSDecimalNumber, NSString, NSURL, PKCurrencyAmount, PKImage;

@interface PKTransactionReceiptLineItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *secondarySubtitle;
@property (retain, nonatomic) PKImage *image;
@property (nonatomic) unsigned long long quantity;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSURL *iconImageURL;
@property (nonatomic) unsigned long long adamIdentifier;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTransactionReceiptLineItem:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
