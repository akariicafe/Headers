@class NSString, NSDecimalNumber;

@interface PKBillPaymentSuggestedAmount : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long category;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) long long merchantCategory;
@property (nonatomic) long long priority;

+ (id)roundingAmount:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAmount:(id)a0 category:(unsigned long long)a1;

@end
