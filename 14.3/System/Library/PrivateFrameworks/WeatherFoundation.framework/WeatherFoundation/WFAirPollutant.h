@class NSString;

@interface WFAirPollutant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) double amount;
@property (retain, nonatomic) NSString *unit;
@property (retain, nonatomic) NSString *localizedCategoryDescription;
@property (nonatomic) unsigned long long categoryIndex;
@property (nonatomic) unsigned long long index;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
