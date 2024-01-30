@class HKSharedSummaryTransaction, NSString;

@interface _HKSharedSummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKSharedSummaryTransaction *transaction;
@property (copy, nonatomic) NSString *package;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
