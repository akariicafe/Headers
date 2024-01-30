@class NSString, NSDecimalNumber;

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedAmount;
@property (nonatomic) BOOL useDarkColor;
@property (nonatomic) BOOL useLargeFont;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long type;

+ (id)itemWithProtobuf:(id)a0;
+ (long long)version;
+ (id)summaryItemWithLabel:(id)a0 amount:(id)a1 type:(unsigned long long)a2;
+ (id)summaryItemWithLabel:(id)a0 amount:(id)a1;

- (id)protobuf;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPaymentSummaryItem:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
