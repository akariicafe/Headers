@class NSString, HKAllowedCountries;

@interface HKRegionAvailability : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) HKAllowedCountries *allowedCountries;
@property (readonly, copy, nonatomic) NSString *prettyPrintedDescription;

+ (id)anyCountryAvailability;
+ (id)allowedInSomeCountries:(id)a0;
+ (id)uncheckedAvailability;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)ineligibilityReasonsForOnboardingCountryCode:(id)a0;
- (void).cxx_destruct;

@end
