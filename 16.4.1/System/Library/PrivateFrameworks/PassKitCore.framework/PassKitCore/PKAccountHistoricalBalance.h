@class NSDecimalNumber, NSDate;

@interface PKAccountHistoricalBalance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBalance:(id)a0 date:(id)a1;

@end
