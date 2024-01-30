@class NSString, NSDictionary;

@interface HDDemoDataFoodObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *genericName;
@property (nonatomic) long long foodType;
@property (copy, nonatomic) NSDictionary *nutritionFacts;
@property (nonatomic) double recommendedNumServings;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToHDDemoDataFoodObject:(id)a0;
- (id)initWithBrandName:(id)a0 genericName:(id)a1 foodType:(long long)a2 nutritionFacts:(id)a3;

@end
