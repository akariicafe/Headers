@class NSDate;

@interface PKRecurringPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL intervalUnitSpecified;
@property (readonly, nonatomic) BOOL intervalCountSpecified;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long intervalUnit;
@property (nonatomic) long long intervalCount;
@property (copy, nonatomic) NSDate *endDate;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToRecurringPaymentSummaryItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
