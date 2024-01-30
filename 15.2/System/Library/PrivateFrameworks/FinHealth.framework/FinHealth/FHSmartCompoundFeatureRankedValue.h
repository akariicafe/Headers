@class NSDecimalNumber, NSArray, NSString, NSDate;

@interface FHSmartCompoundFeatureRankedValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *eventIdentifiers;
@property (copy, nonatomic) NSDate *eventStartDate;
@property (copy, nonatomic) NSDate *eventEndDate;
@property (readonly, copy, nonatomic) NSString *featureLabel;
@property (readonly, copy, nonatomic) NSDecimalNumber *featureRank;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithLabelAndRank:(id)a0 featureRank:(id)a1;

@end
