@class NSDecimalNumber, NSString, NSArray, NSURL, NSDate, NSData, PKCurrencyAmount;

@interface PKTransactionReceipt : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *receiptProviderIdentifier;
@property (copy, nonatomic) NSString *receiptIdentifier;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) NSURL *supportURL;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSDecimalNumber *subtotalAmount;
@property (retain, nonatomic) NSDecimalNumber *totalAmount;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSArray *headerFields;
@property (readonly, nonatomic) NSArray *lineItems;
@property (readonly, nonatomic) NSArray *summaryItems;
@property (readonly, nonatomic) NSData *pdfReceiptData;
@property (readonly, nonatomic) NSData *htmlReceiptData;
@property (readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
@property (readonly, nonatomic) PKCurrencyAmount *totalCurrencyAmount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToTransactionReceipt:(id)a0;
- (void)updateWithBundle:(id)a0;

@end
