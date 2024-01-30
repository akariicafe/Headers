@class NSString, NSDictionary;

@interface HDDemoDataFoodObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *genericName;
@property (nonatomic) long long foodType;
@property (copy, nonatomic) NSDictionary *nutritionFacts;
@property (nonatomic) double recommendedNumServings;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithBrandName:(id)a0 genericName:(id)a1 foodType:(long long)a2 nutritionFacts:(id)a3;

@end
