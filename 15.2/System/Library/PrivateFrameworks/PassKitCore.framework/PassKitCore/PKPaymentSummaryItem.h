@class NSString, NSDecimalNumber;

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedAmount;
@property (nonatomic) BOOL useDarkColor;
@property (nonatomic) BOOL useLargeFont;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long type;

+ (id)summaryItemWithLabel:(id)a0 amount:(id)a1 type:(unsigned long long)a2;
+ (id)summaryItemWithLabel:(id)a0 amount:(id)a1;
+ (long long)version;
+ (id)_recurringSummaryItemWithProtobuf:(id)a0;
+ (id)_deferredSummaryItemWithProtobuf:(id)a0;
+ (id)itemWithProtobuf:(id)a0;

- (BOOL)isEqualToPaymentSummaryItem:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_protobufRecurringSummaryItemForItem:(id)a0;
- (id)_protobufDeferredSummaryItemForItem:(id)a0;
- (id)summaryItemProtobuf;
- (id)dictionaryRepresentation;

@end
