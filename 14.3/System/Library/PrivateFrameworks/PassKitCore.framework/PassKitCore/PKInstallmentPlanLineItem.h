@class NSDecimalNumber, NSString;

@interface PKInstallmentPlanLineItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *itemDescription;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDecimalNumber *paymentsToDateAmount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToInstallmentPlanLineItem:(id)a0;

@end
