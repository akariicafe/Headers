@class NSString, NSDate;

@interface FHAggregateFeature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *processingWindowStartDate;
@property (copy, nonatomic) NSDate *processingWindowEndDate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
